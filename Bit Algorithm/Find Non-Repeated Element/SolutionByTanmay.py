def nonRepeatedElem(arr):
    '''
       Objective :  To Find Non-Repeated Element In An Array
       
       Input     : Array -  A List Of Numbers
       
       Return    : Non-Repeated Element - Numeric Value
       
    '''
    nonRepeatElem = 0
    arr_st = set(arr)
    for elem in arr_st:
        if arr.count(elem)==1:
            nonRepeatElem = elem
            break
        else:
            nonRepeatElem = None
    return nonRepeatElem
    
def main():
    '''
       Objective :  To Find Non-Repeated Element In An Array Input By The User
       
       Input     : None
       
       Return    : None
       
    '''
    arr=[]
    num = int(input("Enter Number Of Elements In An Array : "))
    assert num > 1 and num <= 10**6,"Wrong Input"
    print("Enter Array Elements : ")
    for i in range(num):
        arr.append(int(input()))
        assert arr[i] > 0 and arr[i] <= 10**9,"Wrong Element Entered"
    result = nonRepeatedElem(arr)
    print("Array : ",arr,"\nNon-Repeating Element In Given Array : ", result)
    
if __name__=="__main__":
    main()
