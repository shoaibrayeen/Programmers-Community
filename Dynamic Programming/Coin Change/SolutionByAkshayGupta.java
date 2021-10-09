


/*
Description : Indian Coin Change 
 
*/
 
#include<iostream>
#include<unordered_map>
#include<climits>
using namespace std;
typedef long long ll;
//int  dp[1000000000];
//ll *dp=new ll[100000000]{0};
//vector<int> vv;
//vv.reserve(10000000);
unordered_map<long int, long int> mp;
 
long int  min_xchng(long int  n){
    long int  curr;
    if(n<11){
        return n;
    }
    if(mp[n]!=0){
        return mp[n];
    }
    else{
        curr=min_xchng(n/2) + min_xchng(n/3) + min_xchng(n/4);
        curr=max(curr,n);
    }
    return mp[n]=curr;
}
 
 
int main(){
    int  n;
    cin>>n;
   // memset(dp,-1,900000000);
   //vv.reserve(1000000005);
   // for(int i=0;i<20;i++){cout<<vv[i];}
   // cout<<endl;
    cout<<"Long long int  : "<<LLONG_MAX<<endl;
    cout<<"long int range : "<<LONG_MAX<<endl;
    cout<<"int max range  : "<<INT_MAX<<endl;
    cout<<"ans: "<<min_xchng(n)<<endl;
}
