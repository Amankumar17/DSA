def merge(l,beg,end):
    tmp1=[]
    tmp2=[]
    mid=(beg+end)//2
    p=0
    q=0
    r=beg
    for i in range(beg,mid+1):
        tmp1.append(l[i])
    for i in range(mid+1,end+1):
        tmp2.append(l[i])
    while(p<len(tmp1) and q<len(tmp2)):
        if tmp1[p]<tmp2[q]:
            l[r]=tmp1[p]
            p+=1
        else:
            l[r]=tmp2[q]
            q+=1
        r+=1
        
    while(p<len(tmp1)):
        l[r]=tmp1[p]
        p+=1
        r+=1
    while(q<len(tmp2)):
        l[r]=tmp2[q]
        q+=1
        r+=1
        
    

def merge_sort(l,beg,end):
    if beg<end:
        mid=(beg+end)//2
        merge_sort(l,beg,mid)
        merge_sort(l,mid+1,end)
        merge(l,beg,end)

if __name__ == "__main__":
    n=int(raw_input())
    l=list(map(int,raw_input().split()))
    merge_sort(l,0,n-1)
    print(l)
    