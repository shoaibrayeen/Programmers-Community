#include <bits/stdc++.h> 
using namespace std; 

void rearrangearray(int arr[], int n) 
{ 
	sort(arr, arr + n); 

	int temparr[n];
	int arrIndex = 0; 
	for (int i = 0, j = n-1; i <= n / 2 || j > n / 2; i++, j--) 
	{ 
		temparr[arrIndex] = arr[i]; 
		arrIndex++; 
		temparr[arrIndex] = arr[j]; 
		arrIndex++; 
	} 

	for (int i = 0; i < n; i++) 
		arr[i] = temparr[i]; 
} 

int main() 
{ 
	int arr[] = { 5, 8, 1, 4, 2, 9, 3, 7, 6 }; 
	int n = sizeof(arr) / sizeof(arr[0]); 
	rearrangearray(arr, n); 

	for (int i = 0; i < n; i++) 
		cout << arr[i] << " "; 

	return 0; 
} 
