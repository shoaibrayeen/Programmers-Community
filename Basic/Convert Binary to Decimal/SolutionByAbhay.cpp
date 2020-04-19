#include <bits/stdc++.h>
using namespace std;
int toBinary(int number){
	int decimal=0;
	int i=0;
	while(number){
		int d=number%10;
		decimal+=d*pow(2,i);
		++i;
		number=number/10;
	}
	return decimal;
}
int main(){
	int binary;
	cin>>binary;
	cout<<toBinary(binary)<<endl;
	return 0;
}