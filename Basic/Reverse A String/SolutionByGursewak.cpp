#include <iostream>
#include <conio.h>
using namespace std;

void getStr(string &str){
	string str1;
	for(int i=0; i<str.length(); i++)
		str1[i] = str[str.length()-i-1];
	for(int i=0; i<=str.length(); i++)
		str[i]=str1[i];
}
int main(int argc, char const *argv[])
{
	string str;
	cout<<"Enter number to reverse.\n";
	cin>>str;
	getStr(str);
	cout<<str<<" is reversed string.";
	return 0;
}