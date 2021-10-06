#include<iostream>
using namespace std;

int SecondLargest(int Arr[],int n)
{
	int t;

	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(Arr[j] > Arr[j+1])
			{
				t=Arr[j];
			        Arr[j]=Arr[j+1];
				Arr[j+1]=t;	
			}
		}
	}
	return Arr[n-2];

}

int main()
{
	int size;
	int *A = new int[size];

	cout<<"Enter size: "<<endl;
	cin>>size;

	cout<<"Enter elements: "<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>A[i];	
	}
	
	if(size>1)
	{
		cout<<"Second largest: "<<SecondLargest(A,size)<<endl;
	}
	else
	{
		cout<<"No Second Largest Number"<<endl;
	}
	return 0;
}
