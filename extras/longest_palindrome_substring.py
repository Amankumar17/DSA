s=input()
mxl=0
i=1
ps=0
pe=0
j=0
cnt=0
while(i<len(s)):

    if j>=0 and s[i]==s[j]:
        j-=1
        cnt+=2
    elif j-1>=0 and s[i]==s[j-1]:
        j-=2
        cnt+=3
        if j>=0 and i<len(s) and s[i+1]!=s[j]:
            j=i
    else:
        if cnt>mxl:
            mxl=cnt
            cnt=0
            ps=j
            pe=i
        j=i
    #print(s[i],s[j],cnt,i,j)
    i+=1
if cnt>mxl:
    mxl=cnt
    ps=j
    pe=i
print(s[ps+1:pe])

