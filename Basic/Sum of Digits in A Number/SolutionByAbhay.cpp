#include <bits/stdc++.h>
using namespace std;
int sumOfDigits(int n){
	if (n==0){
		return 0;
	}
	return n%10+(sumOfDigits(n/10));
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int number;
		cin>>number;
		cout<<sumOfDigits(number)<<endl;
	}
	return 0;
}