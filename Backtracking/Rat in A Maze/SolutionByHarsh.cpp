//I am using '-1' for blockages.
#include<bits/stdc++.h>
using namespace std;
 
int dp[1000][1000]={0};
 
int numWays( int row, int col){
    ///base case
    if(dp[row][col]==-1){
        return -1;
    }
    // compute no of wawys for first row and column
    for(int j=0;j<col;j++){
        if(dp[0][j]==-1){break;}//if robot faces any blockagein first row
        dp[0][j]=1;
    }
    for(int i=0;i<row;i++){
        if(dp[i][0]==-1){break;}// if robot faces any blockages in first column
        dp[i][0]=1;
    }
 
    // bottom up approach for the rest of the matrix
    for(int i=1;i<row;i++){
        for(int j=1;j<col;j++){
 
            // if cell is bolcked leave it 
            if(dp[i][j]==-1){continue;}
 
            dp[i][j]=0;
 
            if(dp[i][j-1]!=-1){
                dp[i][j]=dp[i][j-1];
            }
            if(dp[i-1][j]!=-1){
                dp[i][j] = dp[i][j] + dp[i-1][j];
            }
        }
    }
    return dp[row-1][col-1];
 
}
 
int main(){
    int m,n,p;// no of rows and columns and no of blockages in grid
    cin>>m>>n>>p;
    for(int i=0;i<p;i++){
        int x,y;
        cin>>x>>y;
        // marked bolcked the given cellls ;
        dp[x-1][y-1]=-1;
    }
    cout<<numWays(m,n)<<endl;
}
