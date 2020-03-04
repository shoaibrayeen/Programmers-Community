def multiply():
    matrixResultant=[[ 0 for i in range(rowsA) ] for j in range(colsB) ]
    for i in range(rowsA):
        for j in range(colsB):
            for k in range(rowsB):
                matrixResultant[i][j]+=matrixA[i][k]*matrixB[j][k]

    for r in matrixResultant:
        print (r)
        
def inputMatrix():
    print("Enter the entries rowwise for matrix A: ")
    for i in range(rowsA):
        a=[]
        for j in range(colsA):
            a.append(int(input()))
        matrixA.append(a)
    
    print("Enter the entries rowwise for matrix B: ")
    for i in range(rowsB):
        b=[]
        for j in range(colsB):
            b.append(int(input()))
        matrixB.append(b)
    
        
rowsA= int(input("Enter the number of rows for matrix A: "))
colsA= int(input("Enter the number of columns for matrix A: "))

rowsB= int(input("Enter the number of rows for matrix B: "))
colsB= int(input("Enter the number of columns for matrix B: "))


matrixA=[]
matrixB=[]


if colsA==rowsB:
    inputMatrix()
    multiply()
else:
    print("Matrices aren't compatible")
