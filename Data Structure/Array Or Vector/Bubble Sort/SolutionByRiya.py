#function to sort the array
def bubbleSort():
    switched=True
    for i in range(arrSize):
        while(switched==True):
            switched=False
            for j in range(0,arrSize-i-1):
                if arr[j]>arr[j+1]:
                    temp=arr[j]
                    arr[j]=arr[j+1]
                    arr[j+1]=temp
                    switched=True
                    
#main
#taking inputs
arrSize=int(input("Enter your array size:"))
arr=[]
print("Enter your array elements: ")
for i in range(arrSize):
    arr.append(int(input()))

#calling the function
bubbleSort()
    
#printing the sorted array
print("Sorted array is: ")
for i in range(arrSize):
    print (arr[i])
