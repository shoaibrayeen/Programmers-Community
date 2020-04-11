'''
Program implemented to count number of 1's in its binary number
'''
def countSetBits(n):
    if n == 0:
        return 0
    else:
        return (n&1) + countSetBits(n>>1)
n = int(input())
print(countSetBits(n))
