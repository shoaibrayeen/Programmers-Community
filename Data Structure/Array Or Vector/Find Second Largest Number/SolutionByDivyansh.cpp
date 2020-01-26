#include <iostream>
using namespace std;

int SecondLargestNum(int A[], int size) 
{
	int temp;

	for(int i=0; i<size; i++) {
		for(int j=0; j<size; j++) {
			if(A[i] < A[j]) {
				temp = A[i];
				A[i] = A[j];
				A[j] = temp;
			}
		}
	}
	return A[size-2];
}

int main()
{
	int size, result;
	
	cout<<"Enter number of elements: "<<endl;
	cin>>size;

	int A[size];

	cout<<"Enter elements of array: "<<endl;
	for(int i=0; i<size; i++) {
		cin>>A[i];
	}
	
	if(size > 1) {
		result = SecondLargestNum(A, size);
		cout<<"Second Largest Number: "<<result<<endl;
	}
	else {
		cout<<"No Second Largest Number"<<endl;	
	}
	return 0;
}
