#include<iostream>
#include<vector>
using namespace std;

bool isValid(vector<vector<int>>& board, int row, int col, int val){
    for(int i = 0; i < 9; i++) {
        if(board[i][col] == val) 
            return false; 
        
        if(board[row][i] == val) 
            return false; 
        
        if(board[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3] == val) //Checking corresponding 3x3 grid within the same loop
            return false; 
    }
    return true;
}

bool solveSudoku(vector<vector<int>>& board){
    for(int i = 0; i < board.size(); i++){
        for(int j = 0; j < board[0].size(); j++){
            if(board[i][j] == 0){
                for(int val = 1; val <= 9; val++){
                    if(isValid(board, i, j, val)){
                        board[i][j] = val; 
                        
                        if(solveSudoku(board))
                            return true; 
                        else
                            board[i][j] = 0; 
                    }
                }
                
                return false;
            }
        }
    }
    return true;
}

int main()
{
    vector<vector<int>> board  = {{3 ,0, 0, 0, 0, 1, 0, 0, 2},
                                   {2, 0, 1, 0, 3, 0, 6, 0, 4},
                                   {0, 0, 0, 2, 0, 4, 0, 0, 0},
                                   {8, 0, 9, 0, 0, 0, 1, 0, 6},
                                   {0, 6, 0, 0, 0, 0, 0, 5, 0},
                                   {7, 0, 2, 0, 0, 0, 4, 0, 9},
                                   {0, 0, 0, 5, 0, 9, 0, 0, 0},
                                   {9, 0, 4, 0, 8, 0, 7, 0, 5},
                                   {6, 0, 0, 1, 0, 7, 0, 0, 3}};

    if (solveSudoku(board))
    {
        cout<<"Solution : \n";
        for (int i=0;i<9;i++)
        {
            for (int j=0;j<9;j++)
            {
                cout<<board[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    
    return 0;   
}
