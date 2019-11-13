#To Move All Zeros To The End Of The Array

n = int(input("Enter Size Of Array : "))
print("Enter The Elements : ")
c = [int(input()) for i in range(n)]
for elem in c:
    if elem==0:
        c.append(c.pop(c.index(elem)))
print("Final Array : ")
print(c)
