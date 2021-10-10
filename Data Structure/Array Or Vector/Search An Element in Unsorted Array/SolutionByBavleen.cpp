/*
 Program Description - This program finds the element from the Unsorted array.
 Solution Description: Applied Linear Search to check whether the element is present or not.
*/

#include <iostream>
using namespace std;

int main()
{
    int size, i, element;
    cout << "\nEnter the size of array:";
    cin >> size;
    int array[size];
    cout << "\nEnter the array elements:";
    for (i = 0; i < size; i++) {
        cin >> array[i];
    }
    cout << "\nEnter the element to be searched:";
    cin >> element;

    for (i = 0; i < size; i++) {
        if (array[i] == element) {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}
