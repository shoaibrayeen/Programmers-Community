def partition(arr,low,high): 
    i = ( low-1 )         # index of smaller element 
    pivot = arr[high]     # pivot 
  
    for j in range(low , high):
        if   arr[j] < pivot: 
            
            i = i+1 
            arr[i],arr[j] = arr[j],arr[i] 
  
    arr[i+1],arr[high] = arr[high],arr[i+1] 
    return ( i+1 ) 
  
def quickSort(arr,low,high): 
    if low < high: 
  
        partitioning_index = partition(arr,low,high) 
  
        quickSort(arr, low, partitioning_index-1) 
        quickSort(arr, partitioning_index+1, high) 
  
 
arrSize=int(input("Enter your array size:"))
arr=[]
print("Enter your array elements: ")
for i in range(arrSize):
    arr.append(int(input()))


n = len(arr) 
quickSort(arr,0,n-1) 
print ("Sorted array is:") 
for i in range(n): 
    print ("%d" %arr[i]), 
