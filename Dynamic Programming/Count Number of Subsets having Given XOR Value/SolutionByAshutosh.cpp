/*
Program Description:Given an array arr[] of n numbers and a number K, find the number of subsets of arr[] having XOR of elements as K

Input:  n=4, arr[]  = {6, 9, 4,2}, k = 6
Output:  2
The subsets are {4, 2} and {6}

Input:  n=5, arr[]  = {1, 2, 3, 4, 5}, k = 4
Output:  4
The subsets are {1, 5}, {4}, {1, 2, 3, 4} and {2, 3, 5}

Solution Short Description: 
• We will use Tabulation method of DP here
• We need to create a table of order n+1 x m+1, where n = no. of elements in array & m = max xor  value a subset can have
• dp[i][j] = number of subsets having xor = j for subarray arr[0...i-1]
• Now we will fill the table according to the formula dp[i][j] = dp[i-1][j] + dp[i-1][j^arr[i-1]]
• Rightmost corner of the table will be your answer
*/ 
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    int arr[n],k;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>k;

    // find maximum xor value that a subset can have
    int m = ( 1<<(int)log2(*max_element(arr, arr+n)) )- 1; 
    
    // create a dp array of n+1 x m+1 and initialize it with 0
    int dp[n+1][m+1];
    for(int i=0;i<=n;i++) for(int j=0;j<=m;j++) dp[i][j]=0;
    
    // A null subset always have a 0 xor value
    dp[0][0] = 1;
    
    // Fill the table
    for(int i=1;i<=n;i++){
        for(int j=0;j<=m;j++){
            dp[i][j] = dp[i-1][j] + dp[i-1][j^arr[i-1]];
        }
    }
    
    // Rightmost corner will be your answer
    cout<<dp[n][m];
    return 0;
}
