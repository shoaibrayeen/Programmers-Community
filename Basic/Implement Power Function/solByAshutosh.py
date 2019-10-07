def power(n,x):
    num=n
    for i in range(0,x-1):
        n*=num
        
    return n

a=int(input("enter your number:"))
x=int(input("enter the exponent:"))
print(power(a,x))
