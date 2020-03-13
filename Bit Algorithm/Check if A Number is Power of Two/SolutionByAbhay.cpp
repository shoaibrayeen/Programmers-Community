#include <bits/stdc++.h>
using namespace std;
void isPower(int n){
	if(n==0){
		cout<<"No"<<endl;
	}
	if((n & (n-1))==0)
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
}
int main(){
	int testcase;
	cin>>testcase;
	while(testcase--){
		int num;
		cin>>num;
		isPower(num);
	}
	return 0;
}
