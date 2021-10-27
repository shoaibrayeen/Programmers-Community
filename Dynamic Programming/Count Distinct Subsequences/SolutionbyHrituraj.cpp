#include <iostream>
#include <set> 
#include <iterator>
#include <bitset> 
#include <bits/stdc++.h> 
using namespace std;
typedef  long long int ll;
ll mod=1000000007;


int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int l[26] = {0};
        int n = s.length();
        ll sum[n+1]={0} ;
        ll dp[n+1]={0};
        dp[0] = 1;
        dp[1] = 1;
        sum[0] =1;
        sum[1] = 2;
        l[s[0]-'A'] = 1;
        for(int i=2;i<=n;i++){
            dp[i] = sum[i-1];
            if(l[s[i-1]-'A']!=0) dp[i] = (dp[i] - sum[l[s[i-1]-'A']-1] +mod) %mod;
            sum[i] = (sum[i-1] + dp[i] )%mod;
            l[s[i-1]-'A'] = i;
        }
        ll ans =0 ;
        for(int i=0;i<=n;i++)
        {    ans = (ans + dp[i] )%mod;
            
        }
        //cout<<endl;
        
        
        cout<<ans<<"\n";
        
        
    
        
    
        
    }
    return 0;
}
