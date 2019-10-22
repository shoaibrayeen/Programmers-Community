#To check Nth number in fibonacci series using recursion
def fibonacci(n):
    if n<=1:
        return n
    else:
        return(fibonacci(n-1) + fibonacci(n-2))
n = int(input('N='))
for i in range(n):
    fibonacci(i)
print('OUTPUT= ',fibonacci(i))
