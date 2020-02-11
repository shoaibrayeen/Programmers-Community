#include <bits/stdc++.h>
using namespace std;
int decimal(long n){
	int sum=0;
	int last;
	int i=0;
	while(n!=0){
		last=n%2;
		sum=sum+(last*pow(2,i));
		n=n/10;
		i++;
	}
	return sum;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long n;
		cin>>n;
		int m=0;
		if(n==1){
			cout<<n;
			return 0;
		}
		else{
			m=decimal(n);
		}
		cout<<m<<endl;
	}
	return 0;
}