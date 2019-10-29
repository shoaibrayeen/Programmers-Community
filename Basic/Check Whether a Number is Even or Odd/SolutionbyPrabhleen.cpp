#include<iostream>
using namespace std;

int main() 
{
	int n; 
	cin>>n;

	while(n>1)
	{
		n = n-2;
	}

	if(n==0)
		cout<<"Even"<<endl;
	else
		cout<<"Odd"<<endl;

	return 0;
}
