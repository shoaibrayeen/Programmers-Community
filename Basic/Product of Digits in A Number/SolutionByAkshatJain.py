# Function to get product of digits  
def getProduct(n): 
  
    product = 1
  
    while (n != 0): 
        x=(n%10)
        if (x!=0):
          product = product * (x) 
        n = n // 10
  
    return product 
  
# Driver Code 
n = int(input())
print(getProduct(n)) 
  
