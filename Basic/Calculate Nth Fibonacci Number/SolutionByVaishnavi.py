#To print Nth number in fibonacci series

a,b = 0,1
n = int(input('N= '))
for i in range(2,n):
    c = a + b
    a = b
    b = c
print(n,'no in fibonacci series is= ',c)
