#include<iostream>
using namespace std;

int decimalToBinary(int num){
	int ans = 0;
	int pow = 1;

	while(num!=0){
		int rem = num%2;
		num = num/2;

		ans=ans+(rem*pow);
		pow=pow*10;
	}
	return ans;
}
int binaryTodecimal(int bnum){
	int ans = 0;
	int pow = 1;

	while(bnum!=0){
		int rem = bnum%10;
		bnum = bnum/10;

		ans=ans+(rem*pow);
		pow=pow*2;
	}
	return ans;

}
int main(){

    int num;
    cout<<"enter decimal no.";
    cin>>num;
    int value = decimalToBinary(num);
    cout<<value<<endl;
    
    int bnum ;
    cout<<"enter binary no.";
    cin>>num;
	int dvalue = binaryTodecimal(bnum);
	cout<<dvalue;
	//int srcBase;

}
