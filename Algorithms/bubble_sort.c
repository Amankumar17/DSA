#include<stdio.h>
#include<conio.h>
//int arr[100];
void bubble_sort(int *arr,int n)
{
    int i=0,j,cnt=0;
    while (i<n && (i==0 || cnt!=0))
    {
        cnt=0;
        int tmp;
            for(j=0;j<n-i-1;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    tmp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=tmp;
                    cnt++;
                }
            }
        i++;
    }
}


int main()
{
    
    int n,i,arr[10];
    printf("\n\t\tBubble Sort\t\t\n");
    printf("Enter the no. of elements : ");
    scanf("%d",&n);
    
    printf("Enter the %d elements : ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    bubble_sort(arr,n);
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    getch();
    return 0;
}