def number_of_digits(num):
	ct = 0

	while(num > 0):
		digit = num % 10
		num = num // 10 
		ct = ct + 1

	print("Number of Digits:", ct)

num = int(input("Enter Number:"))
number_of_digits(num)
	
	