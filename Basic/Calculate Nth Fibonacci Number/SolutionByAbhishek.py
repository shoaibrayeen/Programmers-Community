def fib(n):
    a=0
    b=1
    if n<0:
        print("not valid")
    elif n==1:
        print(a)
    else:
        print(a)
        print(b)
        for i in range(2,n):
            
            c=a+b
            a=b
            b=c
            if c>100:
                break
            print(c)
n=int(input("enter the number of fib series:"))
fib(n)
