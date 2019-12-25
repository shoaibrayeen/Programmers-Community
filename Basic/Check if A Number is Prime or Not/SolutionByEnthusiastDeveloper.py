'''
	Check if a given number is prime
'''

from math import sqrt

def isPrime(num):
	if num < 0:
		raise ValueError
	if num < 2:
		return False
	if num < 4:
		return True
	# Check if the number is dividing by 2
	if num % 2 == 0:
		return False
	# Check if the number is dividable by odd numbers only
	# This, in theory, should reduce operation time since only half the numbers in the range is tested
	for divisor in range(3, int(sqrt(num)), 2):
		if num % divisor == 0:
			return False
	return True


print('N = ', end='')
try:
	result = isPrime(int(input()))
	print('Output =', 'True' if result else 'False')
except ValueError:
	print('Only positive numbers are supported')
