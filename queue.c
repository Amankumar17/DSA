#include<stdio.h>

int q[100],n,front=0,rear=-1;

void enqueue(int element)
{
    if(rear==n-1)
    {
        printf("Queue full");
    }
    else
    {
        q[++rear] = element;
    }
    return;
    
}

int dequeue()
{
    int i,x=-1;
    if(front>rear)
    {
        printf("Empty queue");
    }
    else
    {
        x = q[front];
    }
    for(i=0;i<rear;i++)
    {
        q[i]=q[i+1];
    }
    rear--;
    return x;
}

void display()
{
    int i;
    for(i=front;i<=rear;i++)
    {
        printf("%d\t",q[i]);
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
        printf("\nQueue");
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
                printf("Element dequeued out of queue is %d",x);
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