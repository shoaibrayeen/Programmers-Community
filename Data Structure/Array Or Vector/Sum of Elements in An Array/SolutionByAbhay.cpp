#include <bits/stdc++.h>
using namespace std;
int sumElements(int a[],int n){
	for(int i=0;i+1<n;i++){
		a[i+1]+=a[i];
	}
	return a[n-1];
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		cout<<sumElements(arr,n)<<endl;
	}
	return 0;
}