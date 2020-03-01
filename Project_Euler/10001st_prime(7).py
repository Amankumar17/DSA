def isprime(x):
    for i in range(2,(x//2)+1):
        if x%i==0:
            return False
    return True

cnt=0
n=2
prime=[]
while(n<2000000):
    if isprime(n)==True:
        cnt+=1
        prime.append(n)
    n+=1
print(prime)
print(sum(prime))
#problem 10 is also implemented by modifying the code
