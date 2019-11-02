num = input("Enter the number whose product of digits are desired: ")
list_num = []
for i in num:
    if i != '0':
        list_num.append(int(i))
    else:
        continue
def product(list):
    p = 1
    for k in list:
        p *= k
    return p
print(product(list_num))
