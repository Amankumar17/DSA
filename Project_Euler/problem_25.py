t=int(input())
tmp=0
l=[1,1]
while(t>0):
    t-=1
    n=int(input())
    if n<tmp:
        l=[1,1]
    tmp=n
    while(len(str(l[-1]))<n):
        l.append(l[-1]+l[-2])
    print(len(l))