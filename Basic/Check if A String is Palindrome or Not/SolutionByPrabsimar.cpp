/*
 Program Description - This program checks if the string is palindrome or not.
 Solution Description: Checking the input string to be even or odd and calling "IsPalindrome" function accordingly.
*/

#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;

void IsPalindrome(string str) 
{ 
    int start = 0; 
    int end = (str.size()) - 1; 
    while (end > start) 
    { 
        if (str[start++] != str[end--]) 
        { 
            cout<<"No"<<endl; 
            return; 
        } 
    } 
    cout<<"Yes"<<endl; 
}  
  
int main()
{
	string string1;
	bool check;
	int length;
	cout<<"Enter the String ?"<<endl;
	cin>> string1;
	IsPalindrome(string1);
return 0;
}
