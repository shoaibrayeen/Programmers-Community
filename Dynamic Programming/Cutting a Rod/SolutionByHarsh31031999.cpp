/*
  Program Description - This program return max value from a rod by its different cutting sizes.
*/

#include<bits/stdc++.h>
using namespace std;
 
int max_profit_topDown(int *arr, int length, int *memo){  //arr is equal to price_each_length
    if(length==0){
        return 0;
    }
    if(memo[length]!=-1){
        return memo[length];
    }
    int best=0;
    for(int i=1;i<=length; i++){
        int net_profit= arr[i] + max_profit_topDown(arr,length-i,memo);
       // cout<<"np of length "<<length<<" and i "<<i<<" is " <<net_profit<<endl;
        best = max(best,net_profit);
    }
    //cout<<"best of  "<<length<<" is :"<<best<<endl;
    memo[length]=best;
    return best;
}
 
int max_profit_bottomUp(int *arr,int length){
    int dp[100]={0};
    for(int i=1;i<=length;i++){
        int best=0;
        for( int cut=1;cut<=i;cut++){
            best=max(best,arr[cut] + dp[i-cut])  ;
        }
        dp[i]=best;
    }
    return dp[length];
}
 
 
int main(){
    int price_each_Length[100];
    int length;
    cin>>length;
    for( int i=1;i<=length;i++){
        cin>>price_each_Length[i];
    }
    int memo[ 100 ];// to store values
    memset(memo,-1,sizeof(memo));
 
    cout<<"max profit by top down : "<<max_profit_topDown(price_each_Length,length,memo)<<endl;
    cout<<"max profit by bottom up : "<<max_profit_bottomUp(price_each_Length,length)<<endl;
 
}
