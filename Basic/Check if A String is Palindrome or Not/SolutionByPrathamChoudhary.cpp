//header file
#include<iostream>
#include<string>
 
using namespace std;
 
int main() {
    	//required variables
	string str;
	
    	//enter the string to check
	cout<<"Enter a string:";
	cin>>str;
	int len = str.length();
	
	for(int i = 0; i <len/2; ++i)
	{
		if(str[i] != str[len-1-i]) {
			cout << "\nNot Palindrome\n";
			return 0;
		}
	}
	cout <<"\nPalindrome";
	return 0;
}
