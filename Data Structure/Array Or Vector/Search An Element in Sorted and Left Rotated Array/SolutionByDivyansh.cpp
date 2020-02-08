#include<iostream>
using namespace std;

int SearchElement(int A[], int size, int element)
{
	int flag=0;
	for(int i=0; i<size; i++) {
		if(A[i] == element) {
			flag = 1;
			break;
		}
	}

	return flag;
}

int main()
{
	int element, flag, size;
	cout<<"Enter number of elements: "<<endl;
	cin>>size;
	int A[size];
	cout<<"Enter elements of array in Sorted and left rotated: "<<endl;
	for(int i=0; i<size; i++) {
		cin>>A[i];
	}
	cout<<"Enter element to search: "<<endl;
	cin>>element;
	flag = SearchElement(A, size, element);
	if(flag == 1 ) {
		cout<<"YES"<<endl;	
	}
	else {
		cout<<"NO"<<endl;
	}
	return 0;
}
