#include<stdio.h>
#include<conio.h>
//int arr[100];
void selection_sort(int *arr,int n)
{
    int i=0,j,cnt=0,ind,tmp;
    for(i=0;i<n-1;i++)
    {
        ind=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[ind]>arr[j])
            {
                ind=j;
            }
        }
        tmp=arr[ind];
        arr[ind]=arr[i];
        arr[i]=tmp;
    }
}


int main()
{
    
    int n,i,arr[10];
    printf("\n\t\tSelection Sort\t\t\n");
    printf("Enter the no. of elements : ");
    scanf("%d",&n);
    
    printf("Enter the %d elements : ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    selection_sort(arr,n);
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    getch();
    return 0;
}