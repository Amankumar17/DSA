class Solution:
    def isValid(self, s: str) -> bool:
        st=[]
        if s=="":
            return True
        for i in range(len(s)):
            if s[i]=='(' or s[i]=='[' or s[i]=='{':
                st.append(s[i])
            else:
                if len(st)==0:
                    return False
                elif s[i]==')' and st[len(st)-1]=='(':
                    st.pop(len(st)-1)
                elif s[i]==']' and st[len(st)-1]=='[':
                    st.pop(len(st)-1)
                elif s[i]=='}' and st[len(st)-1]=='{':
                    st.pop(len(st)-1)
                else:
                    return False
        if len(st)==0:
            return True
                    
                    