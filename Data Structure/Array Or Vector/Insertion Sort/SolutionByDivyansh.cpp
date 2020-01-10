#include<iostream>
using namespace std;

int inputArray(int A[],int size)
{
	for(int i=0;i<size;i++)
	{
		cin>>A[i];
	}

	return 0;
}

int displayArray(int A[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<A[i]<<" ";
	}
	cout<<endl;

	return 0;
}

int insertionSort(int A[],int size)
{
	int key,j;

	for(int i=0;i<size;i++)
	{
		key=A[i];
		j=i-1;

		while(A[j]>key && j >=0)
		{
			A[j+1]=A[j];
			j--;
		}
		A[j+1]=key;
	}
	return 0;
}

int main()
{
	int A[100],size;

	cout<<"Enter size of array: "<<endl;
	cin>>size;

	cout<<"Enter elements in array: "<<endl;
	inputArray(A,size);

        insertionSort(A,size); 
	
	cout<<"Array after sorting: "<<endl;
	displayArray(A, size);

	return 0;
}
