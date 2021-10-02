n=int(input())
 
ar=[0]*(n+1)
ar[0]=1
ar[1]=1
 
for i in range (2,n+1):
    for j in range (1,7):
        if (i-j)>=0:
            ar[i]=(ar[i]+ar[i-j])%((10**9)+7)
 
print(ar[n])
