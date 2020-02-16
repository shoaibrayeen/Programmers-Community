#include <bits/stdc++.h>
using namespace std;
int setBits(int n){
	int c=0;
	while(n!=0){
		if((n>>1)&1){
			c++;
		}
		n=n>>1;
	}
	return c;	
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int number;
		cin>>number;
		cout<<setBits(number)<<endl;
	}
}