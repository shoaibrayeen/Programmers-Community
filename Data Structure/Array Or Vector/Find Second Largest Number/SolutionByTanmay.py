def sec_largest(arr):
    '''
       Objective  : To Find Second Largest Number In An Array
       
       Input      : Array - List Value
       
       Return     : Second Largest Number In An Array - Numeric Value
       
    '''
    if len(arr)==1:
        return "No Second Largest Element"
    else:
        arr = list(set(arr))
        arr.insert(0,arr.pop(arr.index(max(arr))))
    return "Second Largest Element  : " + str(max(arr[1:]))


n = int(input("Enter Array Size : "))
print("Enter Array Elements : ")
c = [int(input()) for i in range(n)]
sec_largest(c)
