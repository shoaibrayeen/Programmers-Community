def bubbleSort(arr): 
    n = len(arr) 
  
    for i in range(n-1): 
            
            for j in range(0, n-i-1): 
                
                if arr[j] > arr[j+1] : 
                    arr[j], arr[j+1] = arr[j+1], arr[j] 
  
 
arrSize=int(input("Enter Array Size"))
arr=[]
print("Enter Array Elements")
for i in range(arrSize):
    arr.append(int(input()))
  
bubbleSort(arr) 
  
print ("Sorted Array - ") 
for i in range(len(arr)): 
    print ("%d" %arr[i]) 
