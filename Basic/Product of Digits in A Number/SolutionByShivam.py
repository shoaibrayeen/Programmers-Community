def product(num):
	prod = 1

	while(num > 0):
		digit = num % 10
		num = num // 10

		if digit != 0:
			prod = prod * digit

	print("Product of Digits:", prod)

num = int(input("Enter Number:"))
product(num)
	
	