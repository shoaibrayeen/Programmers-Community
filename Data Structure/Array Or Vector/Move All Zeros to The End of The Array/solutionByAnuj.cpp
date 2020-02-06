#include <iostream>
using namespace std;

void PushZeroesEnd(int *arr, int n) {
    int var = 0, lo = 0;
    while( var < n ) {
        if( arr[var] != 0 ) {
	    if( var != lo) {
            	int temp = arr[var];
            	arr[var] = arr[lo];
            	arr[lo] = temp;
	    }
            var++;
            lo++;
        }
	else {
            var++;
        }
    }

}

int main() {
	int size;
	cin >> size;
	int *input = new int[size];	
	for( int i = 0; i < size; i++ ){
		cin >> input[i];
	}
	PushZeroesEnd(input, size);
	for( int i = 0; i < size; i++ ) {
		cout << input[i] << "\t";
	}
	return 0;
 }
