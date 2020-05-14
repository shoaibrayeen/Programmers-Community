#include <bits/stdc++.h>
using namespace std;
int toBinary(int number){
	int binary=0;
	int i=0;
	while(number){
		int d=number%2;
		binary+=d*pow(10,i);
		++i;
		number=number/2;
	}
	return binary;
}
int main(){
	int decimal;
	cin>>decimal;
	cout<<toBinary(decimal)<<endl;
	return 0;
}