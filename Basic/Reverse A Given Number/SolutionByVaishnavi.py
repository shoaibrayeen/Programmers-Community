#To reverse a given number
def ReverseNo(num):
    num = str(num)
    reverse = ''.join(reversed(num))
    print(reverse) 
Num = int(input('N= '))
ReverseNo(Num)
