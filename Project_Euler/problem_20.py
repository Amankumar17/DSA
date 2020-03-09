t=int(input())
while(t>0):
    t-=1
    n=int(input())
    ans=1
    for i in range(2,n+1):
        ans=ans*i
    l=list(str(ans))
    fct=0
    for x in l:
        fct+=int(x)
    print(fct)