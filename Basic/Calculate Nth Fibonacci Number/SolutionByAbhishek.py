def fib(n):
    a=0
    b=1
    if n<0:
        print("not valid")
        return
    elif n==1:
        return a
    else:
        for i in range(2,n):
            c=a+b
            a=b
            b=c
        return c

n=int(input("enter the number of fib series:"))
print("\nFibonacci Number\t:\t", fib(n))
