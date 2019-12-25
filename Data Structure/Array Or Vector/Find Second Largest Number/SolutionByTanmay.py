# To Find Second Largest Number In An Array

n = int(input("Enter Size Of Array : "))
print("Enter The Elements : ")
c = [int(input()) for i in range(n)]
if len(c)==1:
    print("No Second Largest Number")
else:
    c=list(set(c))
    num = c.pop(c.index(max(c)))
    c.insert(0,num)
    print("The Second Largest Number Is : ", max(c[1:]))
    
