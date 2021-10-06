#include<iostream>
using namespace std;

int maxi(int a,int b){
	return (a>b)?a:b;
}

int main()
{
	int n,max;

	cout<<"Enter size: "<<endl;
	cin>>n;
	int *A = new int[n];
	cout<<"Enter elements: "<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
	}

	max=A[0];
	
	for(int i=0;i<n;i++)
	{
		max=maxi(max,A[i]);
	}

	cout<<"Maximum element: "<<max<<endl;
	return 0;
}
