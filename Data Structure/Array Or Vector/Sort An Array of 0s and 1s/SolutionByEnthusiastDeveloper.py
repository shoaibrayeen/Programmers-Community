'''
	Sort an array of zeros and ones
'''

def sortArray(array):
	'''
	Sort a given array which should only include 0's and 1's
	Raise a value error on the first value which is not 0 or 1, otherwise returns a sorted array

	Logic:
	1. Go over the supplied array once and:
		a. verify the input values
		b. count how many 1's are in there
	2. Fill the sorted array with zeros (length of given array - number of 1's)
	3. Fill the rest of the sorted array with ones
	4. Return the sorted array
	'''
	num_of_ones = 0
	for x in array:
		if x == 0:
			pass
		elif x == 1:
			num_of_ones += 1
		else:
			raise ValueError

	sorted_array = []
	for i in range(len(array)-num_of_ones):
		sorted_array.append(0)
	for i in range(len(array)-num_of_ones, len(array)):
		sorted_array.append(1)
	return sorted_array

def main():
	print("Insert an array of 0's and 1's (separated by spaces) to be sorted:")
	try:
		user_input = [int(x) for x in input().split()]
		sortedArray = sortArray(user_input)
		print(' Original array:\n  {}\n Sorted array:\n  {}'.format(user_input, sortedArray))
	except ValueError:
		print("Only 0's and 1's please!")


if __name__ == '__main__':
	main()
