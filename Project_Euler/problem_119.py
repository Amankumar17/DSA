n=pow(10,10)
an=[81, 512, 2401, 4913, 5832, 17576, 19683, 234256, 390625, 614656, 1679616, 17210368, 34012224, 52521875, 60466176, 205962976, 612220032, 8303765625, 10460353203, 24794911296]
ans=[]
i=11
while(i<n+1):
    l=list(str(i))
    l=list(map(int,l))
    sm=sum(l)
    j=0
    if i%sm!=0:
        i+=1
        continue
    if sm==1 or sm==0:
        i+=1
        continue
    while(pow(sm,j)<i):
        j+=1
    if pow(sm,j)==i:
        ans.append(i)
        print(sm,j,i)
        
    i+=1
print(ans)
