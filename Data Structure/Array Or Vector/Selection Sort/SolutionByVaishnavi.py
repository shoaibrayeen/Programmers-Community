def selectionSort(arr): 
    for i in range(len(arr)): 
        min_idx = i 
        
        for j in range(i+1, len(arr)): 
            if arr[min_idx] > arr[j]: 
                min_idx = j 
              
    arr[i], arr[min_idx] = arr[min_idx], arr[i] 
  
arrSize=int(input("Enter your array size:"))
arr=[]
print("Enter your array elements: ")
for i in range(arrSize):
    arr.append(int(input()))

selectionSort(arr)

print ("Sorted array") 
for i in range(len(arr)): 
    print("%d" %arr[i])
