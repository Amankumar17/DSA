n=200
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
ans=[]
for i in range(2,n+1):
    if prime[i]==True:
        ans.append(i)
semi=[]
for j in range(2,n+1):
    for x in ans:
        if prime[abs(j-x)]==True:
            semi.append(i)
        break

t=int(input())
while(t>0):
    t-=1
    n=int(input())
    fg=0
    for x in semi:
        if semi.count(n-x)>=1:
            print("YES")
            fg=1
            break
    if fg==0:
        print("NO")
