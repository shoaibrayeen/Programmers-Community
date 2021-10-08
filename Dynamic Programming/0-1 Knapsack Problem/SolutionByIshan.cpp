#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n; cin >> n;
    int vals[n],wts[n];
    int cap; cin >> cap; // max weight for the knapsack
    for(int i=0;i < n;i++) cin >> vals[i];
    for(int i=0;i < n;i++) cin >> wts[i];
    int dp[n + 1][cap + 1] ;
    for(int i = 0; i < n+1;i++){
        for(int j = 0; j<cap + 1;j++) dp[i][j] = 0;
    }
    for(int i = 1; i < n+1;i++){
        for(int j = 1; j<cap + 1;j++){
            if(j >= wts[i-1]){
                int rCap = j - wts[i-1];
                if(dp[i-1][rCap] + vals[i-1] > dp[i-1][j]){
                    dp[i][j] = dp[i-1][rCap] + vals[i-1];
                }else{
                    dp[i][j] = dp[i-1][j];
                }
            }else{
                dp[i][j] = dp[i-1][j];  
            }
        }
    }
    cout << dp[n][cap] << endl;
    return 0;
}
