#include <stdio.h>
#include <conio.h>
int main()
{
    int temp=0,temp2=0,i,n,z,k,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        temp=temp+i;
        temp2=temp;
        for(j=i;j<n;j++)
            {
                printf(" ");
            }
        
        if(i%2!=0)
            {
                for (k=temp-i+1;k<=temp;k++)
                    {
                        if(k==temp){
                            
                            printf("%d",k);
                        }
                        else{
                            printf("%d*",k);
                        }
                    }
                printf("\n");
            }
            
        else
            {
                for(z=temp;z>=temp-i+1;z--)
                {
                    
                    if(z==temp-i+1){
                        printf("%d",z);
                    }
                    else{
                        printf("%d*",z);
                    }
                }
                printf("\n");
            }
        
        temp=temp2;


    }
    getch();
    return 0;
}