#include <iostream>
using namespace std;
int power(int n, int p){
	
	int temp=1;
	if(p==0){
		return 1;
	}
	else if(p>0){
		for(int i=1;i<=p;i++){
			temp=temp*n;
		}
		return temp;
	}
	else{
		for(int i=1;i<=p;i++){
			temp=temp*n;
		}
		return 1/temp;
	}
}
int main() {
	int a,p;
	cout<<"Enter the number: "
	cin>>a;
	cout<<"Enter the power: "
	cin>>p;
	cout<<power(a,p);
	return 0;
}
