def power(x, y): 
  
    #Let Initialize result 
    res = 1
      
    while (y > 0): 
          
        # If y is odd, multiply 
        # x with result 
        if ((y & 1) == 1) : 
            res = res * x 
  
        # n must be even  
        # now y = y/2 
        y = y >> 1
          
        # Change x to x^2 
        x = x * x 
      
    return res 
  
  

x = int(input("Enter a No:")) #Base 
y = int(input("Enter a No:")) #Exponent
  
print("Powered No:", power(x, y))
