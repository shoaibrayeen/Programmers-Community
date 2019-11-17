print('Enter the elements of the array (Space Seperated) : ')
v = [int(i) for i in input().split(" ")]
if 0 in v:
  print(0)
else:
  product = 1
  for i in v:
    product = product*i  
  print(product)
  
