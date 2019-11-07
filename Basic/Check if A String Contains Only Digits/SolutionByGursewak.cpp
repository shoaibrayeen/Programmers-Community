#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	int j=0;
	string str;
	cout<<"Enter a string\n";
	cin>>str;
	for(int i=0; i<str.length(); i++){
		if(isdigit(str[i])){
			j++;
		}
	}
	if(j==str.length()){
		cout<<"Yes, string only have numbers.";
	}
	else{
		cout<<"No, string also not.";
	}
	
}