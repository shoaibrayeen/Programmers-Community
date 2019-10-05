#include <iostream>
using namespace std;
int binary_to_decimal(int a){
	int num=a;
	int value=0;
	
	int base=1;
	int temp = a;
	while(temp){
		int l=temp%10;
		temp=temp/10;
		value+=l*base;
		base= base *2;
	}
	return value;
}
int main() {
	int b;
	// your code goes here
	cout<<"Enter a binary Number: ";
	cin>>b;
	cout<<binary_to_decimal(b);
	return 0;
}
