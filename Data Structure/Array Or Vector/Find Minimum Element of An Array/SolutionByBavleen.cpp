#include<iostream.h>
#include<conio.h>
int mini(int a[], int n)
{
	int min=a[0];
	for(int i=1;i<n;i++)
	{
		if(min>a[i])
		{
			min=a[i];
		}

	}
	return min;
}

void main()
{
	int n;
	cout<<"\nEnter size\n ";
	cin>>n;
	int *a=new int[n];
	cout<<"\nEnter elements \t:\t ";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"\nThe result is\t:\t "<<mini(a,n);
}
