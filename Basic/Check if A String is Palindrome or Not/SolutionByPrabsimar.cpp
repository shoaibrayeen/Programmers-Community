/*
 Program Description - This program checks if the string is palindrome or not.
 Solution Description: Checking the input string to be even or odd and calling "IsPalindrome" function accordingly.
*/

#include<iostream>
#include<string.h>
using namespace std;

bool IsPalindrome(string S, int mid , int end)
{
	int c = 0;
	
	for(int i = 0 ; i < mid ; i++)
	{
		if( S[i] == S[end-i] )
		{
			return true;	
		}
		else
		{
			c=1;
			break;	
		}	
	}
	
	if(c==1)
	{
		return false;
	}
}

int main()
{
	string string1;
	bool check;
	int len;
	
	cout<<"Enter the String you want to check palindrome ?"<<endl;
	cin>> string1;
	
	len = string1.size(); 
	
	if( len % 2 == 0 )
	{
		 check = IsPalindrome(string1 , len/2 , len-1 );
	}
	else
	{
		 check = IsPalindrome(string1 , (len-1)/2 , len-1 );
	}
	
	if(check)
	{
		cout<<"Yes"<<endl;
	}
	else
	{
		cout<<"No"<<endl;
	}
	
return 0;
}
