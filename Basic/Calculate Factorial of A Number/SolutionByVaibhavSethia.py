#Program to calculate factorial of a number

N=int(input())  #Taking input from user and assigning to variable N

if N>=0:
    
  fact=1      #Assiging 1 to fact 
  num=1       #Assigning 1 to num 
  
  for fact in range(1,N+1): 
    num=fact*num     #Calulating factorial
    
  print(num)   #Printing result
