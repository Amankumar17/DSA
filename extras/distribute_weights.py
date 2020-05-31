tc=int(input())
while(tc>0):
    tc-=1
    n,m=map(int,input().split())
    l=list(map(int,input().split()))
    l.sort()
    tmp=sum(l)//m
    i=0
    ans=[]
    while(i<len(l)):
        t=[]
        while(i<len(l) and sum(t)+i<tmp):
            t.append(l[i])
            i+=1
        ans.append(t)
    print(ans)