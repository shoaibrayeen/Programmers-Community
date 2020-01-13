#include<iostream>
using namespace std;

int maxElement(int a,int b){
	return (a>b)?a:b;
}

int main()
{
	int A[100],size,max;

	cout<<"Enter size of array: "<<endl;
	cin>>size;

	cout<<"Enter elements of array: "<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>A[i];
	}

	max=A[0];
	
	for(int i=0;i<size;i++)
	{
		max=maxElement(max,A[i]);
	}

	cout<<"Maximum element in array: "<<max<<endl;

	return 0;

}
