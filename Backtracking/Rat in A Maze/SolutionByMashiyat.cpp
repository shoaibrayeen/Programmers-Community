#include<iostream>
using namespace std;

bool Ratinmaze(char maze[10][10], int sol[][10], int i, int j, int n, int m){
    // recursive case
    if(i==m && j==n){
        sol[m][n] = 1;
        // print the path
        for(int i =0;i<=m; i++){
            for(int j=0; j<=m;j++){
                cout<<sol[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        return true;
    }
    // rat should be inside the maze
    if(i>m || j>n){
        return false;
    }
    if(maze[i][j] == 'X'){
        return false;
    }
    // assume the sol exists
    sol[i][j] = 1;

    // recursive case
    bool rightsucess = Ratinmaze(maze, sol, i, j+1, m, n);
    bool downsucess = Ratinmaze(maze, sol, i+1, j, m, n);

    // backtracking
    sol[i][j] = 0;

    if(rightsucess || downsucess){
        return true;
    }
    return false;
}
int main(){
    char maze[10][10] ={
        "0000",
        "00X0",
        "000X",
        "0X00",
    };
    int sol[10][10] = {0};
    int m =4,n=4;
    bool ans = Ratinmaze(maze,sol,0,0,m-1,n-1);

    if(ans=false){
        cout<<"Path doesn't exists!"<<endl;
    }
    return 0;
}
