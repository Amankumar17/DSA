#include<stdio.h>

int s[100],tos=-1,n;

void push(int element)
{
    if (tos==n-1)
    {
        printf("Stack Overflow");
    }
    else
    {
        s[++tos]=element;
    }
    return;
}

int pop()
{
    int element;
    if(tos==-1)
    {
        printf("Stack Underflow");
    }
    else
    {
        return element=s[tos--];
    }
    return -1;
}

void display()
{
    int i;
    for(i=0;i<=tos;i++)
    {
        printf("%d\t",s[i]);
    }
}


int main()
{
    int choice,x;
    printf("Enter the size of stack : ");
    scanf("%d",&n);
    while(1)
    {
        printf("\n");
        printf("1.Push.\n2.Pop.\n3.Display.\n4.Exit.\n");
        printf("Enter the operation to perform : ");
        scanf("%d",&choice);
        if (choice==1)
        {
            printf("\nEnter the element to insert : ");
            scanf("%d",&x);
            push(x);
        }
        else if(choice==2)
        {
            x=pop();
            if (x!=-1)
                printf("Element pop out of stack is %d",x);
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