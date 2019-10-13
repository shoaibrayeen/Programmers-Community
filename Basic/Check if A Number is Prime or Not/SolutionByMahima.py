# Program to check whether a positive number N is prime or not.

N = int(input("N = "))

def prime(N):
	c = 0
	for i in range(1,N+1):
		if N % i == 0:
			c += 1
	if c == 2:
		print("Yes")
	else:
		print("No")
		
prime(N)
