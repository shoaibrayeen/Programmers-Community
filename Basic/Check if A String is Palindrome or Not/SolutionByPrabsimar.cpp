/*
 Program Description - This program checks if the string is palindrome or not.
 Solution Description: Checking the input string to be even or odd and calling "IsPalindrome" function accordingly.
*/

#include<iostream>
#include<string.h>
using namespace std;

bool IsPalindrome(string String1, int mid , int end)
{
	int c = 0;
	for(int i = 0 ; i < mid ; i++)
	{
		if( String1[i] == String1[end-i] )
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
	int length;
	
	cout<<"Enter the String ?"<<endl;
	cin>> string1;
	length = string1.size(); 
	if( length % 2 == 0 )
	{
		 check = IsPalindrome(string1 , length/2 , length-1 );
	}
	else
	{
		 check = IsPalindrome(string1 , (length-1)/2 , length-1 );
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
