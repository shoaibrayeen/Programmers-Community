#include<bits/stdc++.h>
using namespace std;

int main()
{	int t;
	cin>>t;
	while(t--)
	{
	
		int size;
		cin>>size;
		int n=size-1;
		int arr[n];
		
		int total=(size*(size+1))/2,sum=0;
		for(int i=0;i<n;i++)
		{	cin>>arr[i];
			sum=sum+arr[i];
		}
		
		cout<<total-sum;
		
	}
	
}
