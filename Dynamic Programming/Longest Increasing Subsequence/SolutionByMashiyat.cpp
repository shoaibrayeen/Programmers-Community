#include<iostream>
#include<climits>
#include<vector>
using namespace std;

// bottom up approach
int lis(vector<int>arr){
    int n = arr.size();
    vector<int>dp(n,1);
    int len = 1;
    for(int i = 1; i<n; i++){
        for(int j = 0; j<i; j++){
            if(arr[i]>arr[j]){
                dp[i] = max(dp[i], 1+dp[j]);
                len = max(len,dp[i]);
            }
        }
    }
    return len;
}
int main(){
   int n;
   cin>>n;
   vector<int>arrr(n);
   for(int i=0;i<n;i++){
       cin>>arrr[i];
   }
   cout<<lis(arrr)<<endl;
    return 0;
}
