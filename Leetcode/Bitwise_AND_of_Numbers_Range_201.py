class Solution:
    def rangeBitwiseAnd(self, m: int, n: int) -> int:
        if m==0:
            return 0
        elif m==n:
            return m
        
        i=0
        while(pow(2,i)<m):
            i+=1
        if pow(2,i)>m:
            i-=1
        
        j=i
        while(pow(2,j)<n):
            j+=1
        if pow(2,j)==n or i+1!=j:
            return 0
        else:
            ans=m
            for i in range(m+1,n+1):
                ans=ans&i
            return ans