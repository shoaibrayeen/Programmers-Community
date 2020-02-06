num = int(input('Enter a number: '))
def decimalToBinary(n):   
    
    if(n > 1):       
      
        decimalToBinary(n//2)       
    
    print(n%2, end='') 

decimalToBinary(num)

