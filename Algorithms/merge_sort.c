#include<stdio.h>
#include<conio.h>
//int arr[100];

void merge(int *arr,int beg,int end)
{
    int p=0,q=0,r=0,mid;
    int tmp1[10],tmp2[10];
    mid=(beg+end)/2;
    printf("\n Mid: %d\n",mid);
    for(int i=0;i<=mid;i++)
    {
        tmp1[i]=arr[i];
    }
    for(int j=mid+1;j<=end;j++)
    {
        tmp2[q++]=arr[j];
    }
    q=0;
    r=beg;
    // printf("\n Left: ");
    // for(int i=beg;i<=mid;i++)
    // {
    //     printf("\t %d",tmp1[i]);
    // }
    // printf("\n Right: ");
    // for(int i=mid+1;i<=end;i++)
    // {
    //     printf("\t %d",tmp2[q++]); 
    // }

    while(p<=mid && q<=end-mid-1)
    {
        if(tmp1[p]<tmp2[q])
        {
            arr[r]=tmp1[p++];
        }
        else
        {
            arr[r]=tmp2[q++];
        }
        r++;
    }
    while(p<=mid)
    {
        arr[r++]=tmp1[p++];
    }
    while(q<=end-mid)
    {
        arr[r++]=tmp2[q++];
    }

}

void merge_sort(int *arr,int beg,int end)
{
    
    int i=0,j,cnt=0,ind,mid;
    mid = (beg+end)/2;
    if (beg<end)
    {
        merge_sort(arr,beg,mid);
        merge_sort(arr,mid+1,end);
        merge(arr,beg,end);
    }
}

int main()
{
    
    int n,i,arr[10];
    printf("\n\t\tMerge Sort\t\t\n");
    printf("Enter the no. of elements : ");
    scanf("%d",&n);
    
    printf("Enter the %d elements : ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    merge_sort(arr,0,n-1);
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    getch();
    return 0;
}