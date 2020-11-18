def linear_search(lst, key):
    for i in range(len(lst)):
        if lst[i] == key:
            return i
    return -1
 
lst = input('Enter the integers: ')
lst = lst.split()
lst = [int(x) for x in lst]
key = int(input('Enter a number to search: '))
 
index = linear_search(lst, key)
if index < 0:
    print('{} is not present in the array.'.format(key))
else:
    print('The number is present at location {}.'.format(key, index))
