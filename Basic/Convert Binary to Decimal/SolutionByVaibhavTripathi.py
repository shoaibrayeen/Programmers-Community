num = list(input(" Input a Binary Number: "))

def binaryToDecimal(num):
	value = 0
	for i in range(len(num)):
		if num[-i-1] == '1':
			value += pow(2,i)
	print(value)

binaryToDecimal(num)	
