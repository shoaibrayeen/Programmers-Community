#include<iostream>
using namespace std; 

// Linearly search x in arr[]. If x is present then return its 
// location, otherwise return -1 
int search(int arr[], int n, int x) 
{ 
	int i; 
	for (i = 0; i < n; i++) 
		if (arr[i] == x) 
			return i; 
	return -1; 
} 

// Driver code 
int main() 
{ 
	int n;  
        cout<<"Enter The size of array:-";
	cin>>n;
	int arr[n];
	cout<<" Enter elements in a array ";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int x ;
	cout<<"Enter element which you want to search location in a array : ";
	cin>>x;

	int index = search(arr, n, x); 
	if (index == -1) 
		cout << "Element is not present in the array"; 
	else
		cout << "Element found at position " << index+1; 

	return 0; 
} 
