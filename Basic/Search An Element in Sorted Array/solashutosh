def binarySearch (arr, l, r, x): 
  
     
    if r >= l: 
  
        mid = int((l + r)/2)
  
         
        if arr[mid] == x: 
            return mid 
          
        elif arr[mid] > x: 
            return binarySearch(arr, l, mid-1, x) 
  
        else: 
            return binarySearch(arr, mid + 1, r, x) 
  
    else: 
        
        return -1
  
list1=[]
for i in range(int(input("enter the no of elements"))):
    list1.append(int(input("enter the elements")))

x=int(input("enter the element to be searched"))


  

result = binarySearch(list1, 0, len(list1)-1, x) 
  
if result != -1: 
    print (f"Element is present at index :{result} ")
else: 
    print ("Element is not present in array")
