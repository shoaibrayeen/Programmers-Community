#include <bits/stdc++.h>
using namespace std;
int repeatedElements(int a[], int n){
	int b=a[0];
	for(int i=1;i<n;i++){
		b^=a[i];
	}
	return b;
}
int main(){
	int testcase;
	cin>>testcase;
	while(testcase--){
		int n;
		cin>>n;
		int a[n];

		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		cout<<repeatedElements(a,n);
	}
	return 0;
}
