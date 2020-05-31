class Solution:
    def removeOuterParentheses(self, S: str) -> str:
        i=0
        ans=""
        l=[]
        op=0
        cp=0
        while(i<len(S)):
            if S[i]=='(':
                l.append('(')
                op+=1
            elif S[i]==')':
                l.append(')')
                cp+=1
            if op==cp:
                l.pop(0)
                l.pop(-1)
                ans+="".join(l)
                l=[]
                cp=op=0
            i+=1
        return ans