'''
Program Description: Program to check given number is even or odd.
'''

def check_even_odd(n):

    if n&1:           
        print('Output = ODD')
    else:
        print('Output = EVEN')


print('Enter any positive number = ', end='')
N = int(input())
check_even_odd(N)
