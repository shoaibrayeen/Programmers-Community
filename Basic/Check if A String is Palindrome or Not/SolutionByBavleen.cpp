/*
 Program Description - This program checks if the string is palindrome or not.
 Solution Description: Checking the input string to be even or odd and calling "CheckIfPalindrome" function accordingly.
*/

#include<iostream>
#include<string.h>
using namespace std;

bool CheckIfPalindrome(string Str, int mid , int end)
{
	int c = 0;
	for(int i = 0 ; i < mid ; i++)
	{
		if( Str[i] == Str[end-i] )
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
	string str;
	bool check;
	int length;
	
	cout<<"Enter the String ?"<<endl;
	cin>> str;
	length = str.size(); 
	if( length % 2 == 0 )
	{
		 check = CheckIfPalindrome(str , length/2 , length-1 );
	}
	else
	{
		 check = CheckIfPalindrome(str , (length-1)/2 , length-1 );
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
