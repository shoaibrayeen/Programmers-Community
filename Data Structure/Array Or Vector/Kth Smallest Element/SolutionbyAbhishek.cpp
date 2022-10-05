#include <bits/stdc++.h>
using namespace std;
int ksmall (int arr[], int n, int k){
    sort(arr,arr+n);
    return arr[k-1];
}
int main(){
    int n, k;
    cin>>n>>k;
    int arr[n];
    for (int i=0;i<n;i++) cin>>arr[i];
    cout<<ksmall(arr, n, k);    
    return 0;
}
