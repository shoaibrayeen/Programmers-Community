#To find factorial of number

num = int(input('N='))
factorial = 1

if num<0:
    print('Number is not accepted')
elif num==0:
    print(1)
else:
    for i in range(1,num+1):
        factorial = factorial * i
    print(factorial)
