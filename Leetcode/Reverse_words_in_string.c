#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char arr[100],tmp1[20],tmp2[20],t1;
    int i,j,it,jt;
    printf("Enter the String : ");
    gets(arr);
    i=0;
    jt=strlen(arr)-1;
    it=0;
    j=0;
    printf("%s %d",arr,j);

    while(it<jt)
    {
        printf("aman");
        while(arr[it]!=' ')
            it++;
        while(arr[jt]!=' ')
            jt--;
        if (it-i<jt-j)
        {
            while(i<it)
            {
                t1=arr[i];
                arr[i]=arr[jt+1];
                arr[jt]=t1;
                i++;
                jt++;
            }
            while(j<)
                
        }
        printf("%d %d\n",it++,jt--);
    }
    
    getch();
    return 0;
}