#To check how many digits are present in given number
def ConuntDigits(num):
    count = 0
    r = 0        
    if num<0:
        print('NOT Accepted')
    elif num==0:
        print(1)
    else:
        while num>0:
            r = num % 10
            count =  count + 1
            num = num // 10
        print(count)
num = int(input('N='))
ConuntDigits(num)
