#include <iostream>
using namespace std;
void dec_to_bin(int n){
	int binary[32];
	if(n==0){
		cout<<"0";
	}
	int i=0;
	while(n>0){
		binary[i]=n%2;
		n=n/2;
		i++;
	}
	for(int j=i-1;j>=0;j--){
		cout<<binary[j];
	}
}
int main() {
	// your code goes here
	int a;
	cout<<"Enter a decimal number: ";
	cin>>a;
	dec_to_bin(a);
	return 0;
}
