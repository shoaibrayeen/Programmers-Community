n=int(input())  

def prime_num(n):
  count =0
  for factor in range(1,n+1):   
    if n%factor ==0:    
      count+=1
  if count == 2:   
    print("Yes")
    
  else:
    print("No")  
    
prime_num(n)
