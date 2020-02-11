#include<stdio.h>
#include<conio.h>
//int arr[100];
void insertion_sort(int *arr,int n)
{
    int i=0,j,cnt=0,ind,tmp;
    for(i=1;i<n;i++)
    {
        j=i-1;
        tmp=arr[i];
        while(j>=0 && arr[j]>tmp)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=tmp;
    }
    
}


int main()
{
    
    int n,i,arr[10];
    printf("\n\t\tInsertion Sort\t\t\n");
    printf("Enter the no. of elements : ");
    scanf("%d",&n);
    
    printf("Enter the %d elements : ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    insertion_sort(arr,n);
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    getch();
    return 0;
}