#include<bits/stdc++.h>
#include<vector>

using namespace std;

float median(int *v,int n)
{
	sort(v,v+n);
	if(n%2!=0)
		return float(v[n/2]);
	else
		return ( ((float)v[n/2] + (float)v[(n-1)/2]) /2);
}
int main()
{
	int n;
	cin>>n;
	int *arr = new int[n];
	for(int i =0;i<n;i++)
		cin>>arr[i];

	float ans = median(arr,n);
	cout<<ans<<endl;

}
