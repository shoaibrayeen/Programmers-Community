#include<bits/stdc++.h>
using namespace std;
int maxArr(int *a,int n)
{
	int max=INT_MIN;
	int i=0;
	while(i<n)
	{
		if(a[i]>max)
		{
			max=a[i];
		}	
		i++;
	}
	return max;
}
int main()
{
	int size;
	cout<<"Size: "<<endl;
	cin>>size;

	int *a = new int[size];
	cout<<"Elements: "<<endl;
	for (int i = 0; i < size; i++)
	{
		cin>>a[i];
	}

	cout<<maxArr(a,size);
	return 0;
}
