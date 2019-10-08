def small(d):
    sort_d=sorted(d)
    len1=len(sort_d)
    return [sort_d[len1-1],sort_d[len1-2],sort_d[len1-3]]

set1=[]
n=int(input("enter the number of elements:"))
print("enter the elements:")
for i in range(n):
    set1.append(int(input()))

print(small(set1))
    
