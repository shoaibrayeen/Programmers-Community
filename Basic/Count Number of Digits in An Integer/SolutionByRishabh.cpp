#include <iostream>
using namespace std;

int Count(int n)
{
	if(n==0)
		return 1;
	int countt=0;
	while(n>0)
	{
		n=n/10;
		countt++;

	}

	return countt;
}
int main()
{
	int n;
	cout<<"Enter Number"<<endl;
	cin>>n;

	cout<<Count(n)<<endl;
}
