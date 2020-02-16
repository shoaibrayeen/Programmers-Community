#include <bits/stdc++.h>
using namespace std;
void twoReapeating(int a[], int n){
	int res1=0, res2=0;
	int x=a[0];
	for(int i=1;i<n;i++){ 
		x=x^a[i];
	}
	int sn=(x & ~(x-1));
	for(int i=0;i<n;i++){
		if(a[i]&sn!=0){
			res1=res1^a[i];
		}
		else{
			res2=res2^a[i];
		}
	}
	cout<<res1<<" "<<res2;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		twoReapeating(a,n);
	}
	return 0;
}