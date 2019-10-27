//count no. of vowels in a string
#include<iostream>
	#include<string.h>
	using namespace std;
	
	int main()
	{ 
	int count=0, i=0;
	string shi;
	
	cout<<"Enter the string : ";
	cin>>shi;
	for(i=0;i<shi.length();i++)
	{ 
	if(shi[i]=='a'||shi[i]=='A'||shi[i]=='e'||shi[i]=='E'||shi[i]=='i'||shi[i]=='I'||shi[i]=='o'||shi[i]=='O'||shi[i]=='u'||shi[i]=='U') 
	{
	count=count +1; 
	} 
	
	} 
	cout<<"No. of vowels : "<<count;
	return 0;
	}
