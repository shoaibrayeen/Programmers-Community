/*
    An Array is given with distinct elements. You need to find the largest 3 elements in the Array.
*/

#include <iostream>
using namespace std;

int* Three_LargestElement(int* arr, int n, int* largest_element)
{
    int smallest = arr[0];

    for (int i = 0; i < n; i++)
        if (smallest > arr[i])
            smallest = arr[i];

    for (int i = 0; i < 3; i++) //initializing all element of array with smallest value
        largest_element[i] = smallest;

    for (int i = 0; i < n; i++) {
        if (largest_element[0] < arr[i]) {
            largest_element[2] = largest_element[1];
            largest_element[1] = largest_element[0];
            largest_element[0] = arr[i];
        } else if (largest_element[1] < arr[i] && arr[i] != largest_element[0]) {
            largest_element[2] = largest_element[1];
            largest_element[1] = arr[i];

        } else if (largest_element[2] < arr[i] && arr[i] != largest_element[1] && arr[i] != largest_element[0])
            largest_element[2] = arr[i];
    }
    return largest_element;
}
int main()
{
    int size;
    int largest_element[3];

    cout << "\nEnter size of array ";
    cin >> size;

    if (size > 0) {

        int* arr = new int[size];
        cout << "\nEnter element of array ";
        for (int i = 0; i < size; i++)
            cin >> *(arr + i);
        if (size > 2) {

            int* Large = Three_LargestElement(arr, size, largest_element);
            for (int i = 0; i < 3; i++)
                cout << *(Large + i) << " ";
        } else
            cout << "\nThere should be atleast three element in an array,to find largest three element ";
    }
}
