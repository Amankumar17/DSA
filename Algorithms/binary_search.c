#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int binary_search(int *arr,int ele,int beg,int end)
{
    int mid;
    if (beg<end)
    {
        mid = (beg+end)/2;
        if (arr[mid]==ele)
        {
            return mid;
        }
        else if(arr[mid]>ele)
        {
            return binary_search(arr,ele,beg,mid-1);
        }
        else
        {
            return binary_search(arr,ele,mid+1,end);
        }
        
    }
    else
    {
        return beg;
    }
    
}

int main()
{
    
    int n;
    printf("Enter the no. of elements : ");
    scanf("%d",&n);
    int arr[n],i,pos,ele;
    printf("Enter the %d elements in ascending order : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to search : ");
    scanf("%d",&ele);
    pos = binary_search(arr,ele,0,n-1);
    if (arr[pos]==ele)
    {
        printf("Element found at position %d",pos+1);
    }
    else
    {
        printf("Element not found");
    }
    getch();
    return 0;
}