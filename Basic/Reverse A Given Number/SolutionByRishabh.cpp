#include <iostream>
using namespace std;

int Reverse(int n)
{
	int temp=n,rev=0;
	while(temp>0)
	{
		int rem=temp%10;
		rev=rev*10+rem;
		temp=temp/10;
	}

	return rev;
}
int main()
{
	int n;
	cout<<"Enter Number"<<endl;
	cin>>n;

	cout<<Reverse(n)<<endl;
}

