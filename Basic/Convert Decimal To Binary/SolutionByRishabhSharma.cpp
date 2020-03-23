#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,i=0;
	cin>>n;
	int b[50];

	while(n)
	{
		b[i] = n%2;
		n = n/2;
		i++;
	}
	i--;
	for(;i>=0;i--)
		cout<<b[i];
	cout<<endl;
		
}
