#include<bits/stdc++.h>
using namespace std;
int factorial(int n,long long int temp)
{
	if(n>1)
	{
		temp=temp*(n-1);
		factorial(n-1,temp);
	}
	else
	return temp;
}
int main()
{
	int n;
	cin>>n;
	long long int ans;
	long long int temp=n;
	ans=factorial(n,temp);
	if(n==1)
	cout<<1;
	else
	cout<<ans;
}
