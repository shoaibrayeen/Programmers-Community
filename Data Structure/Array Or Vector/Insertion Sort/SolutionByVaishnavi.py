def insertionSort(arr): 
  
   
    for i in range(1, len(arr)): 
  
        key = arr[i] 
    
        j = i-1
        
        while j >= 0 and key < arr[j] : 
                arr[j + 1] = arr[j] 
                j -= 1
        arr[j + 1] = key 
  
  

arrSize=int(input("Enter your array size:"))
arr=[]
print("Enter your array elements: ")
for i in range(arrSize):
    arr.append(int(input()))

insertionSort(arr) 
for i in range(len(arr)): 
    print ("% d" % arr[i]) 
