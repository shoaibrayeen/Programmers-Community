def count_digits(count=0):
    '''
       Objective  : To Count The Number Of Digits In An Integer
       
       Input      : A Number - Numeric Value
       
       Return     : Number Of Digits In A Integer - Numeric Value
       
    '''
    num = int(input('Enter The Number : '))
    for i in str(num):
        count+=1
    return "No. Of Digits : " + str(count)
        
count_digits()
