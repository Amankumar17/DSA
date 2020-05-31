class Solution:
    def reformat(self, s: str) -> str:
        d=0
        c=0
        alp=""
        dg=""
        for i in range(len(s)):
            if s[i].isalpha():
                c+=1
                alp+=s[i]
            else:
                d+=1
                dg+=s[i]
        if abs(c-d)>1:
            return ""
        ans=""
        for i in range(min(c,d)):
            if c>d:
                ans+=alp[i]+dg[i]
            else:
                ans+=dg[i]+alp[i]
        if c>d:
            ans+=alp[-1]
        elif d>c:
            ans+=dg[-1]
        return ans