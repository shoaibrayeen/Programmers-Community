/*
    An Array is given and You need to reverse the original array.
    1 < size Of Array <= 10^6
    0 < Array Elements <= 10^9
*/
#include <iostream>
using namespace std;

int* reverse(int* arr, int size)
{
    int temp;
    for (int i = 0, j = size - 1; i <= j; i++, j--) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    return arr;
}

int main()
{

    int size, var;
    cout << "Enter the size of array ";
    cin >> size;

    if (size > 0) {
        int* arr = new int[size];

        for (int i = 0; i < size; i++) {
            cout << "\nEnter " << i << " element ";
            cin >> var;
            if (var > 0)
                arr[i] = var;
            else
                i--;
        }

        arr = reverse(arr, size);

        cout << "\nReverse of input array is : ";
        for (int i = 0; i < size; i++)
            cout << arr[i] << "  ";
    }
}
