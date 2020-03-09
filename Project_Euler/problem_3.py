n=1000000
prime={}
for i in range(2,n+1):
    prime[i]=True
i=2
while(i*i<=n):
    if prime[i]==True:
        j=i*i
        while(j<=n):
            prime[j]=False
            j=j+i
    i+=1
#sieve  of erastosthenes

t=int(input())
while(t!=0):
    t-=1
    ans=0
    m=int(input())
    for i in range(2,1000000):
        if prime[i]==True:
            if m%i==0:
                ans=i
    print(ans)