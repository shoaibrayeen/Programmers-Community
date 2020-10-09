#Calculate factorial of a number
def fact(n):
        fact = 1
        for i in range(1,n+1):
            fact = fact * i
        return fact

n = int(input("Enter number: "))
result = fact(n)
print ("The factorial of",n," is : ",result)
