#include<bits/stdc++.h>
using namespace std;
void dispfact(int n )
{
	for(int i = 1 ; i <= n ; i++)
		if(n%i==0)
			cout<<i<<" ";

	cout<<endl;
}
int main()
{
	int n;
	cin>>n;

	if(n==0)
		cout<<"All numbers "<<endl;
	else if(n==1)
		cout<<"1"<<endl;
	else
		dispfact(n);

	return 0;
}
