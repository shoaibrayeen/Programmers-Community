n=int(input())
A=[int(j) for j in input().split()]
sumi=(n*(n+1))//2
print(sumi-sum(A))
