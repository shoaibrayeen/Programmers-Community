#include <iostream>
using namespace std;



int NGE(int *a,int n)
{
	for(int i=0;i<n;i++)
	{
		int flag=0;
		for(int j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
				{
					a[i]=a[j];
					flag=1;
					break;
				}	
		}
	if(flag==0)
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
