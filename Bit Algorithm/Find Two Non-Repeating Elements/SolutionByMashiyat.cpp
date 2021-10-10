#include <bits/stdc++.h>
using namespace std;

void get2NonRepeatingNos(int arr[], int n, int *x, int *y){
    int Xor = arr[0];
    int set_bit_no;
    int i;
    *x = 0;
    *y = 0;
    // get the xor of all the elements
    for(int i=1;i<n;i++){
        Xor ^= arr[i];
    }
    // get the set bit of the right most of Xor
    set_bit_no = Xor & ~(Xor-1);
    // now divide thew elements into two sets
    for(int i=0;i<n;i++){
        // xor of 1st set
        if(arr[i] & set_bit_no){
            *x = *x^arr[i];
        }
        else{
            // xor of second set
            *y = *y^arr[i];
        }
    }
}

int main(){
	int arr[] = {2, 1, 3, 2 };
	int n = sizeof(arr) / sizeof(*arr);
	int* x = new int[(sizeof(int))];
	int* y = new int[(sizeof(int))];
	get2NonRepeatingNos(arr, n, x, y);
	cout << "The non-repeating elements are " << *x << " and " << *y;
}
