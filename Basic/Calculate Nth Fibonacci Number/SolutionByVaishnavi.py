#To print Nth number in fibonacci series

a,b = 0,1
c = 0
n = int(input('N= '))
if n<=1:
    print(0)
else:
    for i in range(2,n):
        c = a + b
        a = b              
        b = c
    print(n,'no in fibonacci series is= ',c)
