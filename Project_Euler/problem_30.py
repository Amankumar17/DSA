n=int(input())
sm=0
for i in range(2,1000000):
    
    tmp=i
    ans=0
    while(tmp>0):
        r=tmp%10
        tmp=tmp//10
        ans+=pow(r,n)
    if ans==i:
        sm+=i

print(sm)
