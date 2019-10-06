#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	int ele,i;
	cin>>ele;
	for(i=0;i<n;i++)
		if(a[i]==ele)
			break;
	if(i<n)
		cout<<"YES\n";
	else
		cout<<"NO\n";
	return 0;
}
