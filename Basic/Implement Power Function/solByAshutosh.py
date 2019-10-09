def power(n,x):
    
    
    if n>0: #positive no:
        num=n
        if x>0:
            for i in range(0,x-1):
                n*=num
    
        else:
            x=-x
            for i in range(0,x-1):
                n*=num
            n=1/n
            
    else:  #negative no:
        num=-n
        n=num
        
        
        if x>0:
            if x%2==0:
                for i in range(0,x-1):
                    n*=num
            elif x%2!=0:
                for i in range(0,x-1):
                    n*=num
                n=-n
                
        else:
           
            x=-x
            
            if x%2==0:
                for i in range(0,x-1):
                    n*=num
                n=1/n
               
            elif x%2!=0:
                for i in range(0,x-1):
                    n*=num
                n=1/-n
                
    return n

a=int(input("enter your number:"))
x=int(input("enter the exponent:"))
print(power(a,x))
