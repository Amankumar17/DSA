#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<stdbool.h>
int g[10][10]={0},vertx,edges;

int q[100],n,front=0,rear=-1;
// *struct arr[10]={NULL};
struct linkedlist {
    int vertex;
    struct linkedlist *next; 
}*newnode,*ptr,*arr[10]={NULL};

void input_matrix()
{
    printf("\nEnter the no.  of vertices : ");
    scanf("%d",&vertx);
    printf("Enter the no. of edges : ");
    scanf("%d",&edges);
    printf("Enter the graph in matrix form with weights : \n");
    for(int i=0;i<vertx;i++)
    {
        for(int j=0;j<vertx;j++)
        {
            scanf("%d",&g[i][j]);
        }
    }
    return;
}

void input_list()
{
    int src,dst,wht;
    printf("\nEnter the no.  of vertices : ");
    scanf("%d",&vertx);
    printf("Enter the no. of edges : ");
    scanf("%d",&edges);
    printf("Enter the edges in the format :\nSource\tDestination\tWeight\n");
    for(int i=0;i<edges;i++)
    {
        scanf("%d %d %d",&src,&dst,&wht);
        //printf("%d %d %d %d %d",src,dst,wht,edges,i);
        newnode = (struct linkedlist*)malloc(sizeof(struct linkedlist));
        newnode->vertex=dst;
        newnode->next=NULL;
        g[src][dst]=wht;
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

void bfs(int sr)
{
    bool visited[100]={false};
    int parent[100]={999},u;
    visited[sr]=true;
    enqueue(sr);
    while(front<=rear)
    {
        u=dequeue();
        printf("%d\t",u);
        for(int i=0;i<vertx;i++)
        {
            if (g[u][i]!=0)
            {
                if (visited[i]==false)
                {
                    visited[i]==true;
                    enqueue(i);
                    parent[i]=u;
                }
            }
        }
        //display();
    }
    return;
}

void dfs()
{
    return;
}

int menu()
{
    int c;
    printf("\t\tMENU\n");
    printf("\n1.BFS.");
    printf("\n2.DFS.");
    printf("\n3.Exit");
    printf("\nEnter your choice : ");
    scanf("%d",&c);
    return c;
}


int main()
{
    int f,ch,s;
    printf("\n1.Adjacency Matrix.");
    printf("\n2.Adjacency List.");
    printf("\nChoose the format to enter graph : ");
    scanf("%d",&f);
    switch (f)
    {
    case 1:
            input_matrix(s);
        break;
    case 2:
            input_list();
        break;
    default:
        break;
    }
    printf("\nYour adjacency matrix is : \n");
    for(int i=0;i<vertx;i++)
    {
        for(int j=0;j<vertx;j++)
        {
            printf("%d ",g[i][j]);
        }
        printf("\n");
    }
    ch=menu();
    while(ch!=3)
    {
        switch (ch)
        {
        case 1:
            printf("Enter the source vertex : ");
            scanf("%d",&s);
            bfs(s);
            break;
        case 2:
            printf("Enter the source vertex : ");
            scanf("%d",&s);
            dfs(s);
            break;
        default:
            break;
        }
        ch=menu();
    }

    getch();
    return 0;
}