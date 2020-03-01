n=int(input())
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

print(prime[n])