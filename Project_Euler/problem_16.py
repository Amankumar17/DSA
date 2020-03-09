import math
x=int(input())
y=int(input())
ans=math.pow(x,y)
l=list(str(int(ans)))
sm=0
for x in l:
    sm+=int(x)
print(sm)
