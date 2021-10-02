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
 
array = [ 17, 23, 45, 10, 11 ]
y = 45
 
# Function call
result = binary_search(array, y)
 
if result != -1:
    print("Element is present at index", str(result))
else:
    print("Element is not present in array")
