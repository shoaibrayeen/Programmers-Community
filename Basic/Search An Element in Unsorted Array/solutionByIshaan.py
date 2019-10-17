# To search an element in an array a simple for loop can be used while comaparing each element .
print("specify the length of the array")
len=int(input())

li=[]
print("enter the array elements one by one")
for i in range(len):
    array = input()
    li.append(array)
print("Enter the value which is to be found")
find=input()
for i in range(len):
    if li[i]==find :
       print("yes")
    elif li[i] != find:
        print("no")
