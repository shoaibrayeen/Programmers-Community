print('Enter the elements of the array (Space Seperated) : ')
v = [int(i) for i in input().split(" ")]

def product(v):
    product = 1
    for i in v:
        product = product*i  
    print(product)
  

product(v)
