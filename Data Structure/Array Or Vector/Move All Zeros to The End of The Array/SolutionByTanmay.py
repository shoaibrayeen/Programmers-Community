def modify_array(arr):
    '''
       Objective  : To Move All Zeroes To The End Of The Array
       
       Input      : Array - List Value
       
       Return     : Array With All Zeroes At The End 
       
    '''
    
    for elem in arr:
        if elem==0:
            arr.append(arr.pop(arr.index(elem)))
        else:
            continue
    return "Resultant Array  : " + str(arr)
    
n = int(input("Enter Array Size : "))
print("Enter Array Elements : ")
c = [int(input()) for i in range(n)]
modify_array(c)
