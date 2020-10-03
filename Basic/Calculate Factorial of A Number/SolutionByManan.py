def Factorial(num):
	fact = 1
	for i in range(1, num+1):
		fact *= i
	return fact


num = int(input("Enter a number whose factorial you want to find: "))
print(f"Factorial of {num} = {Factorial(num)}")

