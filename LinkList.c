#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<stdlib.h>

struct linkedlist {
    int info;
    struct linkedlist *next;
}*root,*ptr,*parentptr,*newnode;

void insert_node(int val)
{
    newnode = (struct linkedlist*)malloc(sizeof(struct linkedlist));
    newnode->info=val;
    newnode->next=NULL;
    ptr=root;
    if (ptr==NULL)
    {
        root=newnode;
        return;
    }
    while(ptr->next!=NULL)
        ptr=ptr->next;
    ptr->next=newnode;
    return;
}


int delete_node()
{
    ptr=root;
    parentptr=root;
    if (ptr==NULL)
    {
        return -999;
    }
    else if(ptr->next==NULL)
    {
        root=NULL;
        return ptr->info;
    }
    while(ptr->next!=NULL)
    {
            parentptr=ptr;
            ptr=ptr->next;
    }
    parentptr->next=NULL;
    return ptr->info;
}


void display_list()
{
    struct linkedlist *ptr=root;
    while(ptr!=NULL)
    {
        printf("%d\t",ptr->info);
        ptr=ptr->next;
    }
    return;
    
}

int menu()
{
    int c;
    printf("\t\tMENU\n");
    printf("\n1.Enter the Element.");
    printf("\n2.Delete the element.");
    printf("\n3.View the LinkList.");
    printf("\n4.Exit");
    printf("\nEnter your choice : ");
    scanf("%d",&c);
    return c;
}

int main()
{
    int ch,ele;
    malloc(sizeof(struct linkedlist));
    ch=menu();
    while(ch!=4)
    {
        switch(ch)
        {
            case 1:printf("\nEnter the element : ");
                    scanf("%d",&ele);
                    insert_node(ele);
                    break;
            case 2:ele = delete_node();
                    if (ele==-999)
                        printf("LinkedList is Empty.");
                    else
                    {
                        printf("Deleted element is %d.",ele);
                    }
                    break;
            case 3:display_list();
                    break;
            case 4: break;
            default:printf("Enter a valid case.\n");         
        }
        ch=menu();
    }
    return 0;
}