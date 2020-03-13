#include <bits/stdc++.h>
using namespace std;
int reverseNumber(int n){
	int reverse=0;
	while(n){
		int d=n%10;
		reverse=(reverse*10)+d;
		n=n/10;
	}
	return(reverse);
}
int main(){
	int testcase;
	cin>>testcase;
	while(testcase--){
		int number;
		cin>>number;
		cout<<reverseNumber(number);
	}
	return 0;
}
