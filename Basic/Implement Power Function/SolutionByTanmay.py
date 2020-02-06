def power_func(Base,Power):
    '''
       Objective    : To Impliment Power Function
       
       Input        : Base, Power - Numeric Values 
       
       Return Value : Base^Power - Numeric Value
    '''
    val = 1
    if Power >= 0:
        for i in range(Power):
            val*=Base
    else:
        for i in range(abs(power)):
            val/=Base
    return val
    
base = int(input('Enter Base Value : '))
power = int(input('Enter Power Value : '))
print(power_func(base,power))
