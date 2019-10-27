#To calculate nth fibonacci number
def fibonacci(n):
    a , b  = 0 , 1 
    series =[]
    
    if (n == 0 ):
        print ("NotAccepted")  
    else :    
        for i in range (a , n) :
            series.append(a)
            a , b = b , a+b
        return series.pop()
