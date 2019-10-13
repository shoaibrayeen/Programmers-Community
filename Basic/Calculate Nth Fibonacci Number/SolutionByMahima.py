# Program to calculate Nth number in a Fibonacci Series.

N = int(input("N = "))

def fibonacci(N):
	a = 0
	b = 1
	for i in range(0,N-2):
		c = a + b
		a = b
		b = c
	print(c)      # This will print the nth number in a Fibonacci Series when a function is called.
	
fibonacci(N)

	
