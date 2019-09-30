#include <iostream>
using namespace std;

void swap(int arr[],int i,int j){
    int temp;
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void sort012(int *arr, int n)  {  
    int var = 0, low = 0, high = n - 1;
    while( var <= high ) {
        if( arr[var] == 0 ) {
            swap( arr, var, low );
            var++;
            low++;
        }
	else if( arr[var] == 1 ) {
            var++;
        }
	else if( arr[var] == 2 ) {
            swap( arr, var, high );
            high--;
        }
    }
}

int main() {
	int size_first;
	cout << "\nEnter Size of Array\t:\t"
	cin >> size_first;
	int *arr_first = new int[size_first];	
	cout << "\nEnter Array Elements\n";
	for( int i = 0; i <size_first; i++ ) {
		cin >> arr_first[i];
	}
	sort012( arr_first, size_first );
	cout << "\nSorted Array\n";
	for( int i = 0; i < size_first; i++ ) {
		cout << arr_first[i] << " ";	
  	}
	return 0;
}
