# Program to count Number of Digits in an Integer.

N = int(input("N = "))

def Number_of_Digits(N):
	count = 0
	while N > 0:
		d = N % 10
		N = N // 10
		count += 1
	print(count)

Number_of_Digits(N)
