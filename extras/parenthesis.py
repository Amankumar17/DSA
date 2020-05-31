s=input()
l=[]
l.append(s[0])
i=1
cnt=0
scr=0
while(i<len(s)):
    if s[i]=='(':
        l.append(s[i])
    