'''
     Program Description: Program to calculate GCD of two numbers.
'''

def calculate_gcd(number1, number2):
    if number1 > 0 and number2 > 0:
        while number1 != number2:
            if number1 > number2:
                number3 = number1 - number2
                number1 = number3
            else:
                number3 = number2 - number1
                number2 = number3
        return number1

print('Enter two numbers:')
number1 = int(input())
number2 = int(input())
gcd = calculate_gcd(number1, number2)
print('Output =', gcd)
