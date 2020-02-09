#include<bits/stdc++.h>
using namespace std;
int tribonacci(int n){
	if(n==1 || n==0){
		return n;
	}
	return tribonacci(n-1)+tribonacci(n-2)+tribonacci(n-3);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int a;
		cin>>a;
		cout<<tribonacci(a);
	}
	return 0;
}
