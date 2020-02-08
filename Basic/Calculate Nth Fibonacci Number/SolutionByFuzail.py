#To calculate nth fibonacci number
def fibonacci(n):

    a , b  = 0 , 1 
    series =[]
    
    if (n == 0 ):
        print ("Enter value greater than 0")  
    else :    
        for i in range (a , n) :
            series.append(a)
            a , b = b , a+b
        return series.pop()
    

x = int(input("Enter the value = "))
fibonacci (x)
