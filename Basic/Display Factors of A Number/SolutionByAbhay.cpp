#include <bits/stdc++.h>
using namespace std;
void Factors(int n){
	cout<<"1"<<",";
	for(int i=2;i<=n/2;i++){
		if(n%i==0){
			cout<<i<<",";
		}
	}
	cout<<n<<endl;;
}
int main(){
	int testcase;
	cin>>testcase;
	while(testcase--){
		int num;
		cin>>num;
		if(num>=0){
			if(num==0){
				cout<<"0"<<endl;
			}
			else{
				Factors(num);	
			}
			
		}
		else{
			cout<<"Enter a positive number";
		}
	}
	return 0;
}
