# Program to calculate Factorial of a Number.

N = int(input("N = "))

def factorial(N):
	f = 1
	for i in range(1,N+1):
		f *= i

	print(f)
	
factorial(N)
