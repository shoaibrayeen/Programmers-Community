def fact_num(num):
    '''
       Objective  : To Find The Factorial Of A Number 
       
       Input      : Number ( num ) - Numeric Value
       
       Return     : Factorial Of A Number - Numeric Value
       
    '''
    if num==1:
        return 1
    else:
        return num*fact_num(num-1)

number = int(input("Enter The Number : "))
fact_num(num)
