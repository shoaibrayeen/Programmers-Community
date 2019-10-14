'''
Program Description: Program to calculate LCM of two numbers.
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

def calculate_lcm(number1 , number2):
    if number1 > 0 and number2 > 0:
        gcd = calculate_gcd(number1 , number2)
        lcm = (number1//gcd) * (number2//gcd) * gcd
        return lcm


print('Enter two numbers:')
number1 = int(input())
number2 = int(input())
lcm = calculate_lcm(number1, number2)
print('Output =', lcm)
