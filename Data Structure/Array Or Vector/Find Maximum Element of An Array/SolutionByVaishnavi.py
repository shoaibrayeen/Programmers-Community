'''
The program is implemented to find maxmimum element in a array

Time complexity: O(n)
Space complexity: O(1)
'''

def inputArray(arr, arrSize):
    print("Enter your array elements\n")
    for i in range(arrSize):
        arr.append(int(input()))

def findMaximum():
    arrSize=int(input("Enter your array size\t:\t"))
    arr = []
    inputArray(arr, arrSize)
    i = 1
    maximum = arr[0]
    while i < arrSize:
        if arr[i] > maximum:
            maximum = arr[i]
        i += 1
    return maximum

print("Maximum Element\t:\t", findMaximum()) 
