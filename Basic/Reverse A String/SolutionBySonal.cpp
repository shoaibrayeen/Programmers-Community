#include<bits/stdc++.h>
using namespace std;

string reverseString(string str){
	string newStr = "";
	int i=0;
	while(str[i] != '\0'){
		newStr = str[i]+newStr;
		i++;
	}
	newStr += '\0';
	return newStr;
}
int main(){
	string str;
	cin>>str;
	cout<<reverseString(str)<<endl;
	return 0;
}
