def zigZag_Fashion(array, length):
    
    flag = True
    for i in range(length - 1):
     
        if flag is True:
           
            if array[i] > array[i+1]:
                array[i],array[i+1] = array[i+1],array[i]
                
        else:
            if array[i] < array[i+1]:
                array[i],array[i+1] = array[i+1],array[i]
                
        flag = bool( 1 - flag )
        
    print(array)
    
arraySize = int(input("Enter Array Size:- " ))
array=[]
print("Enter Array Elements")
for i in range(arraySize):
    array.append(int(input()))
    
length = len(array)

zigZag_Fashion(array, length)
