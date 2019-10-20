num =int(input(" Input a Number: "))

def powerOfTwo(num):
	if(abs(num)%2 != 0):
		print("No")
	else:
		while(num%2 == 0):
			num/=2
		if(num == 1):
			print("Yes")
		else:
			print("No")

powerOfTwo(num)	
