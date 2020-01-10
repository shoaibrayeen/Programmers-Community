#include<bits/stdc++.h>
using namespace std;
int trib(int n)
{
	int f=0,s=0,t=1;
	if(n == 1)
		return 0;
	else if(n == 2)
		return 0;
	else if(n == 3)
		return 1;

	return trib(n-1)+trib(n-2)+trib(n-3);
}
int main()
{
	int n;
	cout<<"Enter a Number "<<endl;
	cin>>n;

	int tib = trib(n);

	cout<<tib<<endl;
}
