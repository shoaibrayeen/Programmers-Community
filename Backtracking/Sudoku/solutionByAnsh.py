'''
Submitted by: Ansh Gupta(@ansh422)
Date: 18/10/2021
'''
def isSafe(x,y,val,grid):
    
    for i in range(9):
        if grid[x][i] == val or grid[i][y] == val:
            return False
    
    for i in range(3):
        for j in range(3):
            if grid[i+(x-x%3)][j+(y-y%3)] == val:
                return False
    
    return True
    
def backtrack(x,y,grid):
    if x == 8 and y == 9:
        return True
    if y > 8:
        x+=1
        y=0
    if grid[x][y] > 0:
        return backtrack(x,y+1,grid)
    for i in range(1,10):
        if isSafe(x,y,i,grid):
            grid[x][y]=i
            if backtrack(x,y+1,grid):
                return True
            grid[x][y]=0
    
    return False
  
def SolveSudoku(grid):
    return backtrack(0,0,grid)

   
def printGrid(arr):
    for i in range(9):
        for j in range(9):
            print(arr[i][j],end=" ")
        print()
            
if __name__ == "__main__":
  
    grid=[[0 for _ in range(9)] for _ in range(9)]
    for i in range(9):
        row=list(map(int,input().split()))
        for j in range(9):
            grid[i][j]=row[j]
    
    if SolveSudoku(grid):
        printGrid(grid)
    else:
        print("Sudoku cannot be solved!")
