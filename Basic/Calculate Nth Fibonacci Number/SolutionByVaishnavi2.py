#To check Nth number in fibonacci series
def fibonacci(n):
    if n<0:
        return 'Not Accepted'
    elif n==1:
        return 0
    elif n==2:
        return 1
    else:
        return (fibonacci(n-1) + fibonacci(n-2))
m = int(input('N='))
print(fibonacci(m))

