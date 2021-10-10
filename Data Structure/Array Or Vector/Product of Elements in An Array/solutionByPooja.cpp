/*
    An Array is given and You need to compute product of all the elements.
*/
#include <iostream>
using namespace std;

int main()
{
    int size, product = 1;
    cout << "Enter the size of array ";
    cin >> size;

    if (size > 0) {
        iint* arr = new int[size];
        for (int i = 0; i < size; i++) {
            cout << "Enter " << i << " element ";
            cin >> arr[i];
        }
        for (int i = 0; i < size; i++)
            product *= arr[i];

        cout << "\nProduct of Array\t:\t" << product << endl;

    } else
        cout << "enter valid size ";
}
