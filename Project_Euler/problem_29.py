n=int(input())
ans=[]
for i in range(2,n+1):
    for j in range(2,n+1):
        ans.append(pow(i,j))
print(len(list(set(ans))))
