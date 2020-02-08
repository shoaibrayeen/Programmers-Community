print('Enter the elements of the array (Space Seperated) : ')
v = [int(i) for i in input().split(" ")]

def reverse(v):
  return v[::-1]

print(reverse(v))
