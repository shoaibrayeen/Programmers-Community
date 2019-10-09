#include <iostream>
using namespace std;
void fact(int n){
	long pro=1;
	if(n==0){
		cout<<"0";
	}
	else{
		
		for(int i=n;i>=1;i--){
		pro=pro*i;
		}
		cout<<pro;
	}
}
int main() {
	int a;
	cout<<"Enter the value of n \n";
	cin>>a;
	fact(a);
	return 0;
}
