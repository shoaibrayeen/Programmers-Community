#To convert decimal to binary number

def decimalToBinary(num):
    if num > 1:
        decimalToBinary(num//2)
    print(num%2,end='')
    
num = int(input('Decimal No= '))
decimalToBinary(num)
