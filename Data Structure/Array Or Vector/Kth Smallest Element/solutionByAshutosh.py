def kthsmall(d,k):
    return sorted(d)[k]

set1=set()
n=int(input("enter the number of elements:"))
print("enter the elements:")
for i in range(n):
    set1.add(int(input()))

k=int(input("which smallest element you want to find:"))
print(kthsmall(set1,k-1))
    
