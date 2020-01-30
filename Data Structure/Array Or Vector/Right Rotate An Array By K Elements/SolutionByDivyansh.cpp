#include <iostream>
using namespace std;

int RightRotateArray(int A[], int size, int K)
{
	int temp_1[size-K], temp_2[K], i=0, j=0, l=0;

	for(i=0; i<size-K; i++) {
		temp_1[i] = A[i];
	}
	for(i=size-K; i<size; i++) {
		temp_2[j] = A[i];
		j++;
	}
	for(i=0; i<K; i++) {
		A[l] = temp_2[i];	
		l++;
	}
	for(i=0; i<size-K; i++) {
		A[l] = temp_1[i];
		l++;
	}
	
	cout<<"Elements of array after right rotated: "<<endl;
	
	for(int i=0;i<size;i++) {
		cout<<A[i]<<endl;
	}

	return 0;
}

int main()
{
	int size, K;
	
	cout<<"Enter number of elements: "<<endl;
	cin>>size;
	
	int A[size];
	
	cout<<"Enter elements of array: "<<endl;
	for(int i=0; i<size; i++) {
		cin>>A[i];
	}
	
	cout<<"Enter value of K to right rotate: "<<endl;
	cin>>K;
	
	RightRotateArray(A, size, K);
	
	return 0;
}
