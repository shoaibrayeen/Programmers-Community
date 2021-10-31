#include <bits/stdc++.h>
using namespace std;

int solve(int *a,int i,int j){
    if(i>j){
        return 0;
    }
    return max(a[i]+min(solve(a,i+1,j-1),solve(a,i+2,j)),a[j] + min(solve(a,i,j-2),solve(a,i+1,j-1)));
}

int main() {
    int n;
    cin>>n;
    int a[n];
    int sum = 0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    cout<<solve(a,0,n-1);
}
