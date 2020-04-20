#include <bits/stdc++.h>
using namespace std;
int toBinary(int number){
	int decimal=0;
	int i=0;
	while(number){
		int d=number%2;
		decimal+=d*pow(10,i);		
		number=number/2;
		++i;
	}
	return decimal;
}
int main(){
	int binary;
	cin>>binary;
	cout<<toBinary(binary)<<endl;
	return 0;
}