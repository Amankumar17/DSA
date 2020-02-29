#include<stdio.h>

int q[100],n,front=-1,rear=-1;

void enqueue(int element)
{
    
    if(front==(rear+1)%n)
    {
        printf("Queue full");
    }
    else
    {
        if (front==-1)
        {
            if (rear==-1)
                rear=0;
            
            front=rear;
        }
        else
        {
            rear = (rear+1) % n;
        }
        q[rear] = element;
        
    }
    return;
    
}

int dequeue()
{
    int x;
    if(front==-1)
    {
        printf("Empty queue");
    }
    else
    {
        x = q[front];
        if (front==rear)
        {
            front=-1;
        }
        else
        {
            front = (front+1) % n;        
        }
        return x;
    }
    return -1;
}

void display()
{
    int i;
    if (front<=rear)
    {
        for(i=front;i<=rear;i++)
        {
            printf("%d\t",q[i]);
        }
    }
    else
    {
        for(i=front;i<n;i++)
        {
            printf("%d\t",q[i]);
        }
        for(i=0;i<=rear;i++)
        {
            printf("%d\t",q[i]);
        }
    }
    return;
}

int main()
{
    int choice,x;
    printf("Enter the size of queue : ");
    scanf("%d",&n);
    while(1)
    {
        printf("\nCircular Queue");
        printf("1.Enqueue.\n2.Dequeue.\n3.Display.\n4.Exit.\n");
        printf("Enter the operation to perform : ");
        scanf("%d",&choice);
        if (choice==1)
        {
            printf("\nEnter the element to insert : ");
            scanf("%d",&x);
            enqueue(x);
        }
        else if(choice==2)
        {
            x=dequeue();
            if (x!=-1)
                printf("Element dequeued out of circular_queue is %d",x);
        }
        else if(choice==3)
        {
            display();
        }
        else
        {
            break;
        }
        
    }   
    return 0; 
}