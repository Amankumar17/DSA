# cook your dish here
import math
n=pow(10,5)
prime=[0]*(n+1)
prime[0]=0
prime[1]=0
i=2
while(i<=n):
    if prime[i]==0:
        prime[i]=1
        j=2
        while(i*j<=n):
            prime[i*j]+=1
            j+=1
    i+=1
print(prime)
tc=int(input())
while(tc>0):
    tc-=1
    a,b,k=map(int,input().split())
    cnt=0
    for i in range(a,b+1):
        if prime[i]==k:
            cnt+=1
    print(cnt)

