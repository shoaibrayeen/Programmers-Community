#include <bits/stdc++.h>
using namespace std;
int noDigits(int n){
	if(n==0){
		return 0;
	}
	return 1+noDigits(n/10);
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int bin;
		if(n==0){
			cout<<n;	
		}
		else
		bin=noDigits(n);
		cout<<bin<<endl;		
	}

	return 0;
}