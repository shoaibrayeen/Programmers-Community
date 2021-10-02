def linear_search(array, y):
  
    for i in range(len(array)):
  
        if array[i] == y:
            return i
  
    return -1
  
array = [11 ,17, 10, 45, 17, 23]  
y = 17
  
result = linear_search(array, y)

if(result == -1):  
    print("Element not found")  
else:  
    print("Element found at index: ", result)  
