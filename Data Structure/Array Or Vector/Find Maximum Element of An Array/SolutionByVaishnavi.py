'''
The program is implemented to find maxmimum element in a array

Time complexity: O(n)
Space complexity: O(1)
'''
arr = list(int(i) for i in input().strip().split(' '))
length = len(arr)
i = 0
maxmimum = arr[0]
while i < length:
    if arr[i] > maxmimum:
        maxmimum = arr[i]
        i += 1
print(maxmimum) 
