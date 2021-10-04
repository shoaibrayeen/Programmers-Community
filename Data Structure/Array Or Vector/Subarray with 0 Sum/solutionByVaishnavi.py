def sub_Array_Exists(array, length):
    
    length_sum = 0
    s = set()
 
    for i in range(length):
        length_sum += array[i]
 
        if length_sum == 0 or length_sum in s:
            return True
        s.add(length_sum)
 
    return False
 
arraySize=int(input("Enter Array Size:- "))
array=[]
print("Enter Array Elements:- ")
for i in range(arraySize):
    array.append(int(input()))

length = len(array)

if sub_Array_Exists(array, length) == True:
    print("True")
else:
    print("False")
