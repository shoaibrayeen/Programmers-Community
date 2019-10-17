'''
     Program Description: Program to calculate factorial of a number
'''
    
dictionary = {0 : 0, 1 : 1}

def calculate_factorial(n):
    if n < 1:
        return 1

    if n in dictionary:
        return dictionary[n]

    dictionary[n] = n * calculate_factorial(n-1)

    return dictionary[n]


print('N = ', end='')
n = int(input())
output = calculate_factorial(n)
print('Output =', output)


