#include<bits/stdc++.h>
using namespace std;
int productOfDigits(int n){
	if(n>0){
		if(n%10==0){
			return 1*productOfDigits(n/10);
		}
		else{
			return n%10*productOfDigits(n/10);
		}
	}
	else{
		return 1;
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int number;
		cin>>number;
		int product=0;
		if(number==0){
			cout<<"The product cannot be generated for zero"<<endl;
		}
		else{
			product=productOfDigits(number);
		}
		cout<<product<<endl;

	}
	return 0;
}