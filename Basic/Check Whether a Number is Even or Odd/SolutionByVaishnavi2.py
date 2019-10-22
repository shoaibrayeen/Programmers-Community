'''to check no is odd or even without using modulus operator there are two methods using division operator method and bitwise AND operator 
 here the solution using division operator method'''

num = int(input('N='))

quotient = num//2

if (quotient*2)==num:
     print('EVEN')
else:
    print('ODD')

