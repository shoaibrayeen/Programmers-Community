#function to sort the array
def insertionSort():
    for i in range(1,arrSize):
        key=arr[i]
        j=i-1
        while j>=0 and key<arr[j]:
            arr[j+1]=arr[j]
            j-=1
        arr[j+1]=key
        
#main
#taking input from user
arrSize=int(input("Enter the size of the array: "))
arr=[]
print("Enter the array: ")
for i in range(arrSize):
    arr.append(int(input()))
   
insertionSort()

#printing the array
print("Sorted Array is: ")
for i in range(arrSize):
    print(arr[i])
