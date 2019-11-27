# program for nth Fibonacci number

def fibonacci(n):
    """Return the nth Fibonacci number."""
    if n == 0:
        return 0

    # r[i] will contain the ith Fibonacci number
    r = [-1] * (n + 1)
    r[0] = 0
    r[1] = 1

    for i in range(2, n + 1):
        r[i] = r[i - 1] + r[i - 2]

    return r[n]


n = int(input('Enter n: '))

ans = fibonacci(n)
print('The nth Fibonacci number:', ans)
