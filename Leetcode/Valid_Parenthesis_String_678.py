class Solution:
    def checkValidString(self, s: str) -> bool:
        st=[]
        cnt=0
        op=0
        for i in range(len(s)):
            if s[i]=='(':
                st.append('(')
                op+=1
            elif s[i]==')':
                if op>0:
                    op-=1
                    j=len(st)-1
                    while(st[j]!='('):
                        j-=1
                    st.pop(j)
                elif cnt>0:
                    cnt-=1
                    j=len(st)-1
                    while(st[j]!='*'):
                        j-=1
                    st.pop(j)
                else:
                    return False
            else:
                cnt+=1
                st.append('*')
            # print(s[i],op,cnt)
        if op==0:
            return True
        elif op>0:
            while(len(st)>0 and op>0):
                j=len(st)-1
                while(st[j]!='('):
                    j-=1
                if j==len(st)-1:
                    return False
                elif j<len(st)-1 and st[j+1]=='*':
                    st.pop(j)
                    st.pop(j)
                    op-=1
                else:
                    return False
                
        return True