def prod_array(arr,mul=1):
    '''
       Objective  : To Find The Product Of Elements In An Array
       
       Input      : Array - List Value
       
       Return     : Product Of Elements In Array - Numeric Value
       
    '''
    
    for elem in arr:
        mul*=elem
    return "Product Of All Elements Is : " + str(mul)
    
n = int(input("Enter Array Size : "))
print("Enter Array Elements : ")
c = [int(input()) for i in range(n)]
prod_array(c)
