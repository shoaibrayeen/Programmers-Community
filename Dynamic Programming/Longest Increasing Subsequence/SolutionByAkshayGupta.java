/*
Description : Longest increasing subsequence O(n^2)

*/


#include<bits/stdc++.h>
using namespace std;
// longest increasing sbsequence O(n^2) using DP
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
 
    int dp[n+1];// for lookup   length is 0 to n
    dp[0]=INT_MIN;
    for(int i=1;i<=n;i++){
        dp[i]=INT_MAX;
    }
 
    for(int i=0;i<n;i++){
        for(int len=0;len<n;len++){ //comparing arr[i] value with left and right
            if(dp[len]<arr[i] && arr[i]<dp[len+1]){  
                dp[len+1]=arr[i];
            }
        }
    }
    int lis=0;
    for( int i=0;i<n;i++){
        if(dp[i]!=INT_MAX){
            lis=i;
        }
    }
    cout<<endl<<lis;
    return 0;
}
