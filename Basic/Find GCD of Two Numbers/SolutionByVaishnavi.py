'''
Program to calculate GCD of 2 numbers
'''

def gcd(a,b):
    gcd = 0
    if a==0:
        print('GCD= ',b)
    if b==0:
        print('GCD= ',a)
    elif a>0 and b>0:
        for i in range(1,a+1):
            if a%i==0 and b%i==0:
                gcd = i
        print('GCD= ',gcd)
print('Enter Two Numbers: ')
x = int(input())
y = int(input())
gcd(x,y)
