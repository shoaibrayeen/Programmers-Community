#To check how many digits are present in given number
def SumDigits(num):
    sum = 0
    r = 0        
    if num<0:
        print('NOT Accepted')
    else:
        while num>0:
            remainder = num % 10
            sum += remainder 
            num //= 10
        print(sum)
num = int(input('N='))
SumDigits(num)
