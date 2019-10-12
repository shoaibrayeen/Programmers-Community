// A C++ program to move all zeroes at the end of array 
#include <iostream> 
using namespace std; 

// Function which pushes all zeros to end of an array. 
void pushZerosToEnd(int arr[], int n) 
{ 
	int count = 0; // Count of non-zero elements 

	// Traverse the array. If element encountered is non- 
	// zero, then replace the element at index 'count' 
	// with this element 
	for (int i = 0; i < n; i++) 
		if (arr[i] != 0) 
			arr[count++] = arr[i]; // here count is 
								// incremented 

	// Now all non-zero elements have been shifted to 
	// front and 'count' is set as index of first 0. 
	// Make all elements 0 from count to end. 
	while (count < n) 
		arr[count++] = 0; 
		
	cout << "Array after pushing all zeros to end of array :\n"; 
		for (int i = 0; i < n; i++) 
		cout << arr[i] << " "; 
	
} 

// Driver program to test above function 
int main() 
{ 
    cout<<"Enter The Size Of Array"<<" ";
	int n;
    cin>>n;
	int arr[n] ; 
	cout<<"Enter Elements in a Array"<<" ";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];//Taking Input from user to stored elements in a array
	}
	pushZerosToEnd(arr, n);  
    return 0;
} 
