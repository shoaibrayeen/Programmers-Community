#Check whether the number is even or odd
def even_odd(num):
	if num%2==0:
		print("Number is Even")
	else:
		print("Number is Odd")

num = int(input("Enter a number: "))
even_odd(num)
