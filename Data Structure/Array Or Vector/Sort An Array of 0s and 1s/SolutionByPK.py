def next0(A,n,x):
    while x<n and A[x]!=0:
        x+=1
    return x
        
n=int(input())
A=[int(j) for j in input().split()]
b=0
for i in range(n):
    if A[i]==1:
        b=next0(A,n,max(b,i))
        if b==n:
            break
        A[i],A[b]=A[b],A[i]
for i in A:
    print(i,end=" ")
