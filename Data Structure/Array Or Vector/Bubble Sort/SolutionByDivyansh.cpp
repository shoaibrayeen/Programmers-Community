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

int bubbleSort(int A[],int size)
{
	int temp;

	for(int i=0;i<size-1;i++)
	{
		for(int j=0;j<size-i-1;j++)
		{
			if(A[j] > A[j+1])
			{
				temp=A[j];
			        A[j]=A[j+1];
				A[j+1]=temp;	
			}
		}
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

        bubbleSort(A,size); 
	
	cout<<"Array after sorting: "<<endl;
	displayArray(A, size);

	return 0;
}
