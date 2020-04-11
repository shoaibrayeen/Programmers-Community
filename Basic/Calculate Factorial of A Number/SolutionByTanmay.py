def fact_num(num):
    '''
       Objective  : To Find The Factorial Of A Number 
       
       Input      : Number ( num ) - Numeric Value
       
       Return     : Factorial Of A Number - Numeric Value
       
    '''
    if num==0:
        return 1
    else:
        return num*fact_num(num-1)

number = int(input("\nEnter The Number\t:\t"))
print("\nFactorial\t\t:\t", fact_num(number) )
