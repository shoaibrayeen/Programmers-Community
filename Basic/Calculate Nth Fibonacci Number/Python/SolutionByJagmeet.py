a=0
b=1

input_n = int(input("Enter the number till you want to find fiboncci:"))
print(a,b,end=' ')
for i in range(2,input_n): # Since two numbers are already printed so now we will start range from 2
    c= a+b
    print(c,end= ' ')
    a = b
    b =c

print("\n\nFibonacci number of ",input_n," is ",c)
