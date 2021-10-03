def linear_search(array, y):
  
    for i in range(len(array)):
  
        if array[i] == y:
            return i
  
    return -1
  
arrSize=int(input("Enter Array Size"))
array=[]
print("Enter Array Elements")
for i in range(arrSize):
    array.append(int(input()))
    
y = int(input("Enter Number you want to find =:-"))
    
result = linear_search(array, y)

if(result == -1):  
    print("Element not found")  
else:  
    print("Element found at index: ", result)  
