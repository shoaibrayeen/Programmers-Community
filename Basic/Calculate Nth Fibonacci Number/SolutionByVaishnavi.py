#To print Nth number in fibonacci series

a,b = 0,1
n = int(input('N= '))
if n<0:
    print('Not accepted')
elif n==0:
    print(a)
elif n==1:
    print(b)
else:
    for i in range(2,n):
        c = a + b
        a = b              
        b = c
    print(n,'no in fibonacci series is= ',b)
