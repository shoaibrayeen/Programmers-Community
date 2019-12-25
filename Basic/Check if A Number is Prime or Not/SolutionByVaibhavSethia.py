#Program to check if a number is prime or not

n=int(input())  #Taking input

def prime_num(n):
  count =0
  for factor in range(1,n+1):   
    if n%factor ==0:    #Checking if a number is factor of given number
      count+=1
  if count == 2:   #If total number of factors =2
    print("Yes")
    
  else:
    print("No")  
    
prime_num(n)
