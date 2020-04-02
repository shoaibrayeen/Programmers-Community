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

int main(){

    int num;
    cout<<"enter decimal no.";
    cin>>num;
    int value = decimalToBinary(num);
    cout<<value<<endl;
    

}
