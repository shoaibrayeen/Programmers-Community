'''
   Program implemented to check given number is power of 2 or not
'''
def power_of_2(n):
    if n == 0:
        return 'NO'
    if n%2 != 0 and n != 1:
        return 'NO'
    else:
        while n%2 == 0:            
            n //= 2
        if n == 1:
            return 'YES'
        else:
            return 'NO' 
n = int(input('N= '))
print(power_of_2(n))
