#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<stdlib.h>

struct bst {
    int info;
    struct bst *left;
    struct bst *right;
}*root,*ptr,*parentptr,*newnode,*temp,*tempparent,*tempchild;

void insert_node(struct bst *temp,int val)
{
    if (temp!=NULL)
    {
        if (temp->info > val)
        {
            if (temp -> left != NULL)
            {
                insert_node(temp -> left,val);
            }
            else
            {
                newnode = malloc(sizeof(struct bst));
                newnode->info=val;
                newnode->left=NULL;
                newnode->right=NULL;
                temp -> left = newnode;
                printf("%d left",newnode->info);
                return;
            }
        }
        else
        {
            if (temp -> right != NULL)
            {
                insert_node(temp -> right,val);
            }
            else
            {
                newnode = malloc(sizeof(struct bst));
                newnode->info=val;
                newnode->left=NULL;
                newnode->right=NULL;
                temp -> right = newnode;
                printf("%d right",newnode->info);
                return;
            }
        }
        
    }
    else
    {
        newnode = malloc(sizeof(struct bst));
        newnode->info=val;
        newnode->left=NULL;
        newnode->right=NULL;
        root = newnode;
        printf("%d center",newnode->info);       
    }
    return;
}

void inorder(struct bst *temp)
{
    if (temp!=NULL)
    {
       inorder(temp->left);
       printf("%d\t",temp->info);
       inorder(temp->right); 
    }
}

int bst_srch(struct bst *temp,int val)
{
    if (temp!=NULL)
    {
        if (temp->info == val)
        {
            return 1;
        }
        else if(temp->info > val)
        {
            return bst_srch(temp->left,val);
        }
        else
        {
            return bst_srch(temp->right,val);
        }
    }
    
}

void delete_node(struct bst* parentptr,struct bst* ptr)
{
    if (ptr->left==NULL && ptr->right==NULL)
    {
        if (parentptr->left==ptr)
            parentptr->left=NULL;
        else
            parentptr->right=NULL;
    }
    else if((ptr->left!=NULL && ptr->right==NULL) || (ptr->left==NULL && ptr->right!=NULL))
    {
        if (parentptr->left==ptr)
        {
            if(ptr->left==NULL)
                parentptr->left=ptr->right;
            else
                parentptr->left=ptr->left;
        }
        else
        {
            if(ptr->left==NULL)
                parentptr->right=ptr->right;
            else
                parentptr->right=ptr->left;
        }
    }
    else if(ptr->left!=NULL && ptr->right!=NULL)
    {
        tempparent=ptr;
        tempchild=ptr->right;
        while(tempchild->left!=NULL)
        {
            tempparent=tempchild;
            tempchild=tempchild->left;
        }
        ptr->info=tempchild->info;
        delete_node(tempparent,tempchild);
    }
    return;
}

int menu()
{
    int c;
    printf("\t\tMENU\n");
    printf("\n1.Enter the Element.");
    printf("\n2.Delete the element.");
    printf("\n3.Search an element in the bst.");
    printf("\n4.Traversal.");
    printf("\n5.Exit");
    printf("\nEnter your choice : ");
    scanf("%d",&c);
    return c;
}

int main()
{
    int ch,ele,val,chk;
    ch=menu();
    while(ch!=5)
    {
        switch(ch)
        {
            case 1:printf("\nEnter the element : ");
                    scanf("%d",&ele);
                    insert_node(root,ele);
                    break;
            case 2:printf("Enter the element to delete : ");
                    scanf("%d",&val);
                    //chk=bst_srch(root,val);
                    parentptr=root;
                    ptr=root;
                    while(ptr!=NULL && ptr->info!=val)
                    {
                        parentptr=ptr;
                        if (ptr->info>val)
                        {
                            ptr=ptr->left;
                        }
                        else
                        {
                            ptr=ptr->right;
                        }
                        
                    }
                    if (ptr==root && parentptr==root)
                    {
                        if (ptr->left==NULL && ptr->right==NULL)
                            root=NULL;
                        else if((ptr->left!=NULL && ptr->right==NULL) || (ptr->left==NULL && ptr->right!=NULL))
                        {
                            if (root->left!=NULL)
                                root=root->left;
                            else
                                root=root->right;
                        }
                        else if(ptr->left!=NULL && ptr->right!=NULL)
                        {
                            tempparent=root;
                            tempchild=root->right;
                            while(tempchild->left!=NULL)
                            {
                                tempparent=tempchild;
                                tempchild=tempchild->left;
                            }
                            root->info=tempchild->info;
                            delete_node(tempparent,tempchild);
                        }
                    }
                    else if(ptr==NULL)
                    {
                        printf("Element not present in the bst.");
                    }
                    else
                    {
                        delete_node(parentptr,ptr);
                    }
                   break;
            case 3:printf("Enter the element to search : ");
                    scanf("%d",&val);
                    ele = bst_srch(root,val);
                    if (ele==1)
                    {
                        printf("Element Found in bst.");
                    }
                    else
                    {
                        printf("Element not found in bst.");
                    }
                    break;
            case 4:inorder(root);
                    break;
            case 5: break;
            default:printf("Enter a valid case.\n");         
        }
        ch=menu();
    }
    return 0;
}