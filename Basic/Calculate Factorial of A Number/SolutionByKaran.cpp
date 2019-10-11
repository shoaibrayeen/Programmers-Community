#include <iostream>
using namespace std;
int fact(int n)
{
	long pro=1;
	if(n==0)
	{
		return 0;
	}
	else
	{
		
		for(int i=n;i>=1;i--)
		{
			pro=pro*i;
		}
		return pro;
	}
}
int main() 
{
	int a;
	cout<<"Enter the value of n \n";
	cin>>a;
	cout<<fact(a);
	return 0;
}
