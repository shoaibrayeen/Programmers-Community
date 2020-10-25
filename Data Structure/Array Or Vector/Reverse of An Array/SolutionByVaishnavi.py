def reverseList(arr, start, end):
    while start < end:
        arr[start], arr[end] = arr[end], arr[start]
        start += 1
        end -= 1
 
arrSize=int(input("Enter your array size:"))
arr=[]
print("Enter your array elements: ")
for i in range(arrSize):
    arr.append(int(input()))
n = len(arr)

reverseList(arr, 0, n-1)
print("Reversed list is")
print(arr)
