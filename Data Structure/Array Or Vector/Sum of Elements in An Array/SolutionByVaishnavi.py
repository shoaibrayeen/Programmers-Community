'''
Program implemented to find sum of elements in an array
'''
def sumArray(arr):
    if len(arr) == 0:
        return 0
    return arr[0] + sumArray(arr[1:])
n = int(input('Array size= '))
arr = list(int(i) for i in input('Array Elements= ').split())
print(sumArray(arr))
