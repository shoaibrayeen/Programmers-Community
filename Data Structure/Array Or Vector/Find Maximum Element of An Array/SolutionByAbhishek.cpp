#include<bits/stdc++.h>
using namespace std;
int maxArray(int *a,int n)
{
	int max=INT_MIN;
	for(int i=0;i<n;i++)
	{
		if(a[i]>max)
			max=a[i];
	}
	return max;
}
int main()
{
	int n;
	cout<<"Enter Size "<<endl;
	cin>>n;

	int *a = new int[n];
	cout<<"Enter Elements "<<endl;
	for (int i = 0; i < n; i++)
	{
		/* code */
		cin>>a[i];
	}

	cout<<maxArray(a,n);
	return 0;
}
