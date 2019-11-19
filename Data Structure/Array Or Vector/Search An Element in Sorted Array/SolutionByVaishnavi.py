'''
Program implemented to search an element in sorted array
approach: Using binary search
'''
def binarySearch(arr,x,startIndex,endIndex):
    if startIndex > endIndex:
        return -1
    mid = (startIndex + endIndex) //2
    if arr[mid] == x:
        return mid
    elif arr[mid] > x:
        return binarySearch(arr,x,startIndex,mid - 1)
    else:
        return binarySearch(arr,x,mid+1,endIndex)
n = int(input('Array size= '))
arr = list(int(i) for i in input('Array elements= ').strip().split())
x = int(input('Element to search= '))

if binarySearch(arr,x,0,len(arr)-1) != -1:
    print('YES')
else:
    print('NO')
