///Binary Search

#include <iostream>
using namespace std;

int BinarySearch(int arr[], int n, int val){	

    int start=0,end=n-1,mid;
    while(start<=end)
    {
        mid = (start+end)/2;
        if (arr[mid]==val)
        {
            return mid;
        }
        else if (arr[mid]<val)
        {
            start=mid + 1;
        }
        else if (arr[mid]>val)
        {
            end=mid-1;
        }
    }
    return -1;

}

int main() {
	
	int size,val;
    cout << "Enter the size of array: ";
	cin>>size;
	int *input=new int[1+size];
	
    cout << "Enter the array: ";
	for(int i=0;i<size;i++)
		cin>>input[i];

    cout << "Enter the search value: ";
	cin>>val;
    if (BinarySearch(input,size,val) != -1) {cout<< "YES" << endl;}
    else {cout<< "NO" << endl;}
	return 0;
}

