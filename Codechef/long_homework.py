def returnDict(L,m):
    dic={}
    for i in range(0,len(L)):
        try:

            if dic[L[i]%m]:
                dic[L[i]%m].append(L[i])
        except:
            dic[L[i]%m]=[L[i]]
        print(dic)
    return dic

if __name__=="__main__":
    n,q,m=map(int,input().split())
    L=list(map(int,input().split()))
    dt=returnDict(L,m)
    while(q>0):
        q-=1
        i,r=map(int,input().split())
        dt[r].sort()
        try:
            val=dt[r][i-1]
            for i in range(len(L)):
                if L[i]==val:
                    print(i+1)
                    break
        except:
            print(-1)
