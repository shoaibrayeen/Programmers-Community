def prime(a):
	i=1
	k=0
	
	while(i<=a):
		
		if(a%i==0):
			
      k=k+1
		
    i=i+1
		
	if(k==2):
		
    print("Yes")
			
	else:
		
    print("No")
		
print("Enter the number: ")
n = int(input())
prime(n)
