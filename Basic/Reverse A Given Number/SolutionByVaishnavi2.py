#Reverse a given number without using reverse function

def ReverseNo(num):
    reverse = 0
    while num>0:
        r = num % 10
        reverse = reverse * 10 + r
        num //= 10
    print(reverse)
num = int(input('N= '))
ReverseNo(num)
        
