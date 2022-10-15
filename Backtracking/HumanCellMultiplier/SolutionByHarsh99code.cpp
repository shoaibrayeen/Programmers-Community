/*
1. Double the number of cells present in the container.

2. Increase the number of cells in the container by 1.

3. Decrease the number of cells in the container by 1.

Now, all the above operations have different costs associated with them x,y,z respectively for above operations.

Input
Each test case contains 2 lines. First lines contains an integer N.
Second lines contains 3 space separated integers x, y, and z
*/

#include<iostream>
using namespace std;
 
typedef long long ll;
 
ll cells_cost(ll n, ll x, ll y,ll z){
    ll *dp=new ll[n+1];
    dp[0]=dp[1]={0};
    for(ll i=2;i<=n;i++){
        if(n%2==0){
            dp[i]=min(dp[i/2]+x, dp[i-1]+y);
        }else{
            dp[i]=min(dp[(i+1)/2]+x+z,dp[i-1]+y);
        }
    }
    return dp[n];
}
int main(){
    ll x,y,z,n;
    cin>>n>>x>>y>>z;
    cout<<cells_cost(n,x,y,z);
    return 0;
}
