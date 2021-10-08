/*
  Program Description - Abdul Bari MCM.
*/

#include<bits/stdc++.h>
using namespace std;
// MCM abdul bari 
 
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
 
    int dp[n+1][n+1]={0};// first row and column is zero 
    int s[n+1][n+1]={0};    //first row and column is zero 
 
    int j, minimum , q;
    for(int d=1;d<n-1;d++){  // d is diagonal or we can say difference 
        for( int i=1;i<n-d;i++){   //  i is for  row 
            j=i+d;// j is for columns 
            minimum = INT_MAX;
            for(int k=i;k<j;k++){
                q= dp[i][k] +dp[k+1][j] + arr[i-1]*arr[k]*arr[j];
                minimum = min(q,minimum);
            }
            dp[i][j]=minimum;
        }
    }
    cout<<dp[1][n-1];
return 0;
}
