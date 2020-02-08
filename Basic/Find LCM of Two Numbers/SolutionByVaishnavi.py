'''
Program to calculate LCM of 2 numbers
'''
def gcd(a,b):
    gcd = 0
    if a==0:
        return b        
    if b==0:
        return a
    elif a>0 and b>0:
        for i in range(1,a+1):
            if a%i==0 and b%i==0:
                gcd = i
        return gcd
def lcm(a,b):
    g = gcd(x,y)
    l = a//g
    lcm = l * b
    return lcm
print('Enter Two Numbers: ')
k = input().split()
x,y = int(k[0]),int(k[1])
print(lcm(x,y))
