#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,i=0;
	cout << "\nEnter Number\t:\t";
	cin>>n;
	if( n==0 ) {
		cout << "\nBinary\t:\t0";
		return 0;
	}
	int b[32];
	while(n)
	{
		b[i] = n%2;
		n = n/2;
		i++;
	}
	i--;
	cout << "\nBinary\t:\t";
	for(;i>=0;i--)
		cout<<b[i];
	cout<<endl;
	return 0;
}
