#Converting a hex base number to base 17 number
import math
s=raw_input('Enter the hex number : ')
n=len(s)
ans=0
def hexrtn(c):
    if c.isalpha():
        if c=='A':
            return 10
        elif c=='B':
            return 11
        elif c=='C':
            return 12
        elif c=='D':
            return 13
        elif c=='E':
            return 14
        elif c=='F':
            return 15
    else:
        return int(c)

def basertn(c):
    if c>9:
        if c==10:
            return 'A'
        elif c==11:
            return 'B'
        elif c==12:
            return 'C'
        elif c==13:
            return 'D'
        elif c==14:
            return 'E'
        elif c==15:
            return 'F'
        elif c==16:
            return 'G'
    else:
        return str(c)


for i in range(n):
    ans = ans + hexrtn(s[n-i-1])*pow(17,i)
print(ans)
fbn = ""
while(ans!=0):
    r = ans%17
    ans = ans//17
    fbn = fbn + basertn(r)

print(fbn[::-1])