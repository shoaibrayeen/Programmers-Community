rows= int(input("Enter the number of rows: "))
cols= int(input("Enter the number of columns: "))

matrixA=[]
print("Enter the entries rowwise for matrix A: ")
for i in range(rows):
    a=[]
    for j in range(cols):
        a.append(int(input()))
    matrixA.append(a)


matrixB=[]
print("Enter the entries rowwise for matrix B: ")
for i in range(rows):
    b=[]
    for j in range(cols):
        b.append(int(input()))
    matrixB.append(b)

matrixResultant=[[ 0 for i in range(rows) ] for j in range(cols)]
for i in range(rows):
    for j in range(cols):
        matrixResultant[i][j]=matrixA[i][j]+matrixB[i][j]
        
for r in matrixResultant:
    print (r)
