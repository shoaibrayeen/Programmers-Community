/*
Problem Statement:-Given an array, print the Next Greater Element (NGE) for every element. The Next greater Element for an element x is the first greater element on the right side of x in array. Elements for which no greater element exist, consider next greater element as -1.

Time Complexity: O(n)
Space Complexity: O(n)


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

    vi array(n),greater_element(n,-1);

    for(int i=0;i<n;i++){
        cin>>array[i];
    }

    ll i=n-2;

    while(i>=0){
        if(array[i]<array[i+1])
            greater_element[i]=array[i+1];

        else if(array[i]<greater_element[i+1])
            greater_element[i]=greater_element[i+1];   

        i--;    
    }

    cout<<"Element"<<" "<<"NGE"<<endl;

    for(ll i=0;i<n;i++)
        cout<<array[i]<<" ----> "<<greater_element[i]<<endl;
}