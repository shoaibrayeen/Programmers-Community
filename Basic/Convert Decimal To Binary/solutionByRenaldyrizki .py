def DecimalToBinary(num): 
    if num > 1: 
        DecimalToBinary(num // 2) 
    print(num % 2, end = '') 

while True:
    try:
        num = int(input("Enter a number: "))
        break
    except ValueError:
        print("Oops!  That was no valid number.  Try again...")
DecimalToBinary(num) 
