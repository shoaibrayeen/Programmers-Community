num =int(input(" Input a Number: "))



def sumDigits(num):

	sum = 0
	while(num>0):
		dig=num%10
		sum +=dig
		num//=10
	print(sum)	



sumDigits(num)	
