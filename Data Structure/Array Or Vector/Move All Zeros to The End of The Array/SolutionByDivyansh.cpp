#include <iostream>
using namespace std;

int shiftZeros(int A[], int size) 
{
	int count = 0;

	for(int i=0; i<size; i++) {
		if(A[i] != 0) {
			A[count] = A[i];
			count++;
		}
	}
	for(int i=count; i<size; i++) {
		A[i] = 0;
	}
	cout<<"Elements of array after shifting zeros to end: "<<endl;
	for(int i=0; i<size; i++) {
		cout<<A[i]<<" ";
	}
	cout<<"\n";

	return 0;
}

int main()
{
	int size;

	cout<<"Enter size of array: "<<endl;
	cin>>size;
	int A[size];
	cout<<"Enter elements of array: "<<endl;
	for(int i=0; i<size; i++) {
		cin>>A[i];
	}
	shiftZeros(A, size);
	
	return 0;
}
