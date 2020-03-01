n=600851475143
def isprime(x):
    for i in range(2,(x//2)+1):
        if x%i==0:
            return False
    return True

p=n-1
while(True):
    if n%p==0 :
        if isprime(p)==True:
            print(p)
            break;
    p-=1
