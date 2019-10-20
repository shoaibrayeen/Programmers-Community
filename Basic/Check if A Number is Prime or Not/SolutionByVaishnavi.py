#checking no is prime or not
num = int (input('Enter a no you want to check='))

if num<0:
    print('no is not accepted')
if num==1:
    print('no is not prime nor composite')
if num>1: 
    for i in range(2,num):
        if (num % i) == 0:
            print('no is not prime')
            break
    else:
        print('no is prime')   
