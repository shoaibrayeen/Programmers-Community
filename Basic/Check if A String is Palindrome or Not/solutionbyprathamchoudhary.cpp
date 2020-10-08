//header file
#include<iostream>
 
using namespace std;
 
int main()
{
    //required variables
	int i,j,len,flag=1;
	char str[20];
	
    //enter the string to check
	cout<<"Enter a string:";
	cin>>str;
	
    //checking for palindrome
	for(len=0;str[len]!='\0';++len);
	
	for(i=0,j=len-1;i<len/2;++i,--j)
	{
		if(str[j]!=str[i])
			flag=0;
	}
	
	if(flag==1)
		cout<<"\nThe given string "<<str<<" is Palindrome";
	else
		cout<<"\nThe  given string "<<str<<" is not Palindrome";
 
	return 0;
}