class Solution:
    def printVertically(self, s: str) -> List[str]:
        l=list(s.split())
        mx=0
        for i in range(len(l)):
            if len(l[i])>mx:
                mx=len(l[i])
        for i in range(len(l)):
            if len(l[i])<mx:
                l[i]+=" "*(mx-len(l[i]))
        ans=[]
        for i in range(mx):
            ans.append("")
        for i in range(mx):
            for j in range(len(l)):
                ans[i]+=l[j][i]
        for i in range(mx):
            ans[i]=ans[i].rstrip()
        return ans
            