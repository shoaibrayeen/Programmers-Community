#include<bits/stdc++.h>
using namespace std;

bool checkPrime(int n)
{
	for(int i = 2; i < n; i++)
	{
		if(n%i==0)
			return false;
	}
return true;
}

int main()
{
	int n;
	cin>>n;

	bool b = checkPrime(n);

	if(b)
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
}
