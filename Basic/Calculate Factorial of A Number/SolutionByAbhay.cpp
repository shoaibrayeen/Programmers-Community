#include <bits/stdc++.h>
using namespace std;
int factorial(int n){
	if(n==1|| n==0 ){
		return 1;
	}
	
	return n*factorial (n-1);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int a;
		cin>>a;
		cout<<factorial(a);
	}
	return 0;
}
