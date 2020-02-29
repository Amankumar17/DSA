#include<stdio.h>
#include<conio.h>
//int arr[100];

void merge(int *arr,int beg,int end)
{
    int p=0,q=0,r=0,mid,tp,tq;
    int tmp1[10],tmp2[10];
    mid=(beg+end)/2;
    //printf("\n Mid: %d\n",mid);
    
    for(int i=beg;i<mid;i++)
    {
        tmp1[p++]=arr[i];
    }
    for(int j=mid;j<end;j++)
    {
        tmp2[q++]=arr[j];
    }
    tp=p-1;
    tq=q-1;
    p=0;
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

    while(p<=tp && q<=tq)
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
    while(p<=tp)
    {
        arr[r++]=tmp1[p++];
    }
    while(q<=tq)
    {
        arr[r++]=tmp2[q++];
    }
    for(int i=0;i<5;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");

}

void merge_sort(int *arr,int beg,int end)
{
    int i=0,j,cnt=0,ind,mid;
    mid = (beg+end)/2;
    if (beg<end)
    {
        printf("beg: %d , end: %d \n",beg,end);
        merge_sort(arr,beg,mid);
        merge_sort(arr,mid,end);
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
    merge_sort(arr,0,n);
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    getch();
    return 0;
}