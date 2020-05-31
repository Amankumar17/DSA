class Solution:
    l=[]
    def getpriority(self,c):
        if c=='*' or c=='/':
            return 1
        else:
            return 0
        
    def solve(self,i):
        while( i+2<len(self.l) and self.getpriority(self.l[i+2])>self.getpriority(self.l[i])):
            self.solve(i+2)
        
        if self.l[i]=='/':
            self.l[i-1]=self.l[i-1]//self.l[i+1]
        elif self.l[i]=='*':
            self.l[i-1]*=self.l[i+1]
        elif self.l[i]=='+':
            self.l[i-1]+=self.l[i+1]
        elif self.l[i]=='-':
            self.l[i-1]=self.l[i-1]-self.l[i+1]
        self.l.pop(i)
        self.l.pop(i)
        return 
    def calculate(self, s: str) -> int:
        
        i=0
        tmp=""
        while(i<len(s)):
            if s[i].isdigit()==False and s[i]!=" ":
                self.l.append(int(tmp))
                self.l.append(s[i])
                tmp=""
            elif s[i]==" ":
                pass
            else:
                tmp+=s[i]
            i+=1
        if tmp!="":
            self.l.append(int(tmp))
        i=1
        while(len(self.l)>1 and i<len(self.l)):
            self.solve(i)    
            
        return self.l.pop(0)