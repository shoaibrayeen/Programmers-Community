def search(array,ele):
    if len(array)==0: #if array is empty
        return False
    if array[0]==ele: # if ele is found at 0th index
        return True
    return search(array[1:],ele) # recursively search for the element in the array
    
size=int(input())
array=[int(i) for i in input().split()]
ele=int(input())
if search(array,ele):
    print("Yes")
else:
    print("No")