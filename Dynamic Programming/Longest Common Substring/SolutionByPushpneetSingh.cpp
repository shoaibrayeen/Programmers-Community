#include <bits/stdc++.h>
using namespace std;
int dp[1001][1001];

int lcs(string s1,string s2){
    // Bottom UP approach
    int n = s1.size();
    int m = s2.size();
    
    int res=0;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(s1[i-1]==s2[j-1]) {
                dp[i][j] = 1 + dp[i-1][j-1];
                res = max(res,dp[i][j]);
            }
            else{
                dp[i][j] = 0;
            }
        }
    }

    return res;
}

int main() {
    string s1,s2;
    cin>>s1>>s2;
    
    memset(dp,0,sizeof(dp));

    cout<<lcs(s1,s2);

    return 0;
}
