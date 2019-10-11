/*
Problem Statement:-An Array is given and every element is appearing twice except one element. You need to find that element.

Time_complexity:O(n)
Space_complexity:O(1)

*/

#include<bits/stdc++.h>
#include<string.h>
#include<tuple>
#define all(c) c.begin(),c.end()
#define tr(n,x) for(int i=x;x<n?i<n:i>=n;x<n?i++:i--)
#define ll long long int
#define pb push_back
#define em emplace_back
#define mk make_pair
#define isro ios_base::sync_with_stdio(false)
#define find(v,x) find(all(v),x)!=v.end()
#define debug(c) cout<<c<<endl;

using namespace std;
typedef vector<ll>vi;
typedef vector<vi>vii;
typedef vector<string>si;
typedef vector<si>sii;
typedef pair<ll,ll>pi;
typedef tuple<ll,ll,ll>ti;

ll Max=1e6;
vi visited(Max,0);



int main(){
    isro;
    ll n;
    cin>>n;

    vi array(n);
    for(ll i=0;i<n;i++)
        cin>>array[i];

    ll unique_element=0;
    
    for(auto i:array)
           unique_element^=i;


    cout<<"Unique_element is"<<" "<<unique_element<<endl;       

}
