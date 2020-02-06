#include <iostream>
using namespace std;



void NGE(int *a,int n)
{
	int *b=new int[n];
	int k=0;
	for(int i=0;i<n;i++)
	{
		int flag=0;
		for(int j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
				{
					b[k++]=a[j];
					flag=1;
					break;
				}

	
		}
	if(flag==0)
		b[k++]=-1;
	}
	b[n-1]=-1;


	for(int i=0;i<n;i++)
    	cout<<b[i]<<" ";
}
int main()
{
	int n;
	cin>>n;

	int *a=new int[n];
	
	for(int i=0;i<n;i++)
		cin>>a[i];

	NGE(a,n);
    
    


}
