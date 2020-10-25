def prime(num):
	ct = 1

	for i in range(1, num//2 + 1):
		if(num % i == 0):
			ct = ct + 1

		if(ct > 2):
			return False

	return True

num = int(input("Enter Number:"))

if(num == 1):
	print("Neither Prime Nor composite")

else:
	print("Prime Number:", prime(num))