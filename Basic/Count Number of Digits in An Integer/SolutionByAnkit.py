'''
     Program Description: Program to count number of digits in an integer.
'''

def count_digits(n):
    if n >= 0:
        str_n = str(n)  # converting int to string 
        return len(str_n)

print('Enter an integer =', end=' ')
N = int(input())
print('Output =', count_digits(N))

