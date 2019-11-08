#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	int j=0;
	string str;
	cout<<"Enter a string\t:\t";
	cin>>str;
	for(int i=0; i<str.length(); i++){
		if(isdigit(str[i])){
			j++;
		}
	}
	if(j==str.length()){
		cout<<"\nYes\n";
	}
	else{
		cout<<"No\n";
	}
	
}
