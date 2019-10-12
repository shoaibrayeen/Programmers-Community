def factorial (n):

    fac= 1

    #zero factorial is one 

    if n==0 :
        
         return fac
        
    else :
        
        for i in range(1,n+1):
            
            fac = fac *i
            
        return fac
   
number =int(input("enter to number to compute the factorial  " ))

x = factorial(number)
    
print("the factorial of the number is ",x)
