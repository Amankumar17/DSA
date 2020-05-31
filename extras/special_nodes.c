#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<stdbool.h>
int vertx,edges,color[100000]={-1},spc=0;
bool visited[100000]={false};
int q[100000],n,front=0,rear=-1;
// *struct arr[10]={NULL};
struct linkedlist {
    int vertex;
    struct linkedlist *next; 
}*newnode,*ptr,*arr[10]={NULL};

void input_list()
{
    int src,dst,wht;
    scanf("%d",&vertx);
    edges=vertx-1;
    for(int i=0;i<edges;i++)
    {
        scanf("%d %d ",&src,&dst);
        newnode = (struct linkedlist*)malloc(sizeof(struct linkedlist));
        newnode->vertex=dst;
        newnode->next=NULL;
        ptr=arr[src];
        if (ptr==NULL)
        {
            arr[src]=newnode;
        }
        else
        {
            while(ptr->next!=NULL)
                ptr=ptr->next;
            ptr->next=newnode;
        }
    }
    return;   
}

void enqueue(int element)
{
    if(rear==vertx-1)
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
    printf("\n");
    return;
}

void special(int sr)
{
    int u;
    if (visited[sr]!=true)
    {
        visited[sr]=true;
        spc++;
    }
    enqueue(sr);
    while(front<=rear)
    {
        u=dequeue();
        ptr=arr[sr];
        while(ptr!=NULL)
        {
            if (visited[ptr->vertex]!=true && color[sr]==color[ptr->vertex])
            {
                visited[ptr->vertex]=true;
                spc++;
            }
            ptr=ptr->next;
        }
    }
    // int i;
    // for(i=1;i<=vertx;i++)
    // {
    //     printf("%d\t",visited[i]);
    // }
    // printf("\n");
     
    return;
}

int main(){
    int n,q,tmp;
    input_list();
    for(int i=1;i<vertx+1;i++)
    {
        scanf("%d",&color[i]);
    }
    scanf("%d",&q);
    for(int i=0;i<q;i++)
    {
        scanf("%d",&tmp);
        special(tmp);
        printf("%d\n",spc);
        display();
    }
    return 0;
}   
