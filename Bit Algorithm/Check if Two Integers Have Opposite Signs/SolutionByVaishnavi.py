'''
program implemented to check given two numbers have opposite signs or not
'''
def check_signs(x,y):
    if (x >= 0 and y >= 0) or ( x < 0 and y < 0 ):
       return 'NO'
    else:
        return 'YES'
k = input().split()
x , y = int(k[0]),int(k[1])
print(check_signs(x,y))
