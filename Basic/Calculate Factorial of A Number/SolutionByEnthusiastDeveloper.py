'''
	Program Description: Calculate factorial of a given number
'''


def calculate_factorial(n):
	if n == 0:
		return 1
	if n < 0:
		raise ValueError
	fact = 1
	for x in range(1,n+1):
		fact *= x
	return fact


print('N = ', end='')
try:
	result = calculate_factorial(int(input()))
	print('Output =', result)
except ValueError:
	print('Only positive numbers are supported')
