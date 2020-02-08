num =int(input(" Input a Number: "))

def factorsOf(num):
	factors=[]
	for i in range(1,num+1):
		if num%i==0:
			factors.append(i)
	print(factors)

factorsOf(num)	
