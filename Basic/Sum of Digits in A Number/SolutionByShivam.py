def sum_of_digits(num):
	sum = 0

	while(num > 0):
		digit = num % 10
		num = num // 10 
		sum = sum + digit

	print("Sum of Digits:", sum)

num = int(input("Enter Number:"))
sum_of_digits(num)
	
	