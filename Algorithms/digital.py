#Finding the position after n iteration having certain pattern
x=10
y=0
cnt=10
n=int(input("Enter the nth point : "))
for i in range(n):
    if(i%4)==0:
        y=0-y
        y=y+10
    elif(i%4)==1:
        x=0-x
    elif(i%4)==2:
        y=0-y
    elif(i%4)==3:
        x=0-x
        x=x+10
    print(x,y)
