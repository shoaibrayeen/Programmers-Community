#include<iostream>
using namespace std;
int main()
{
	int i, num, n, c=0;
	cout<<"Enter the array size : ";
	cin>>n;
  int arr[n];
	cout<<"Enter Array Elements : ";
	for(i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the element to be searched : ";
	cin>>num;
	for(i=0; i<n; i++)
	{
		if(arr[i]==num)
		{
			c=1;
			break;
		}
	}
	if(c==0)
	{
		cout<<"NO";
	}
	else
	{
		cout<<"YES";
	}
	return 0;
}
