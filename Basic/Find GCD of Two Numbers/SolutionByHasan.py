def gcd(a, b):
    """Calculate the Greatest Common Divisor of a and b. """
    while b:
        a, b = b, a%b
    return a

number1 = input("Enter first number: ")
number2 = input("Enter second number: ")
gcdOfNums = gcd(number1, number2)
print("GCD: " + str(gcdOfNums))