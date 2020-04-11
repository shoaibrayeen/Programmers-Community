#function to sort the array
def selectionSort():
    for i in range(arrSize):
        min=i
        for j in range(i+1,arrSize):
            if arr[min]>arr[j]:
                min=j
        temp=arr[min]
        arr[min]=arr[i]
        arr[i]=temp
        
#main
#taking inputs
arrSize=int(input("Enter your array size:"))
arr=[]
print("Enter your array elements: ")
for i in range(arrSize):
    arr.append(int(input()))

#calling the function
selectionSort()
    
#printing the sorted array
print("Sorted array is: ")
for i in range(arrSize):
    print (arr[i])
