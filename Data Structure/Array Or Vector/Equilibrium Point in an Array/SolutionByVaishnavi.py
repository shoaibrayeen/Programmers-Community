#equilibrium index
def equilibriumIndex(arr):
    n = len(arr)
    rightSum= 0
    leftSum = 0
    
    #sum of all elements
    for i in range(n):
        rightSum += arr[i]
        
    for i in range(n):
        rightSum -= arr[i]
        
        if leftSum == rightSum:
            return i
        leftSum += arr[i]
        
    return -1

arrSize=int(input("Enter your array size:"))
arr=[]
print("Enter your array elements: ")
for i in range(arrSize):
    arr.append(int(input()))

print(equilibriumIndex(arr))
