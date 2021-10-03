def binary_search(array, y):
    low_index = 0
    high_index = len(array) - 1
    middle = 0
 
    while low_index <= high_index:
 
        middle = (high_index + low_index) // 2
 
        if array[middle] < y:
            low_index = middle + 1
 
        elif array[middle] > y:
            high_index = middle - 1
 
        else:
            return middle
 
    return -1
 
arrSize=int(input("Enter Array Size"))
array=[]
print("Enter Array Elements")
for i in range(arrSize):
    array.append(int(input()))

y = int(input("Enter Number you want to find =:-")
 
result = binary_search(array, y)
 
if result != -1:
    print("Element is present at index", str(result))
else:
    print("Element is not present in array")
