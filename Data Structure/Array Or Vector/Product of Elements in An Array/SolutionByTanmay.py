#To Find Product Of Elements In An Array

n = int(input("Enter Array Size : "))
print("Enter Array Elements : ")
c = [int(input()) for i in range(n)]
mul=1
for elem in c:
    mul*=elem
print("Product Of All Elements Is : ", mul)
