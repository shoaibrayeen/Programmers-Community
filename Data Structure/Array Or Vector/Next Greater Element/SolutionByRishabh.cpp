#include <iostream>
using namespace std;

int NGE(int *a,int n)
{
	for (int i = 0; i <n; i++)
	{
		if(a[i]<a[i+1])
			a[i]=a[i+1];
		else if(a[i]>a[i+1])
			a[i]=-1;
	}
	a[n-1]=-1;
}
int main()
{
	int n;
	cin>>n;

	int *a=new int[n];
	
	for(int i=0;i<n;i++)
		cin>>a[i];

	NGE(a,n);
    
    for(int i=0;i<n;i++)
    	cout<<a[i]<<" ";
}
