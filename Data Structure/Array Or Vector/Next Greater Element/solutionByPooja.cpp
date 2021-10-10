/*
Given an array, print the Next Greater Element (NGE) for every element. The Next greater Element for an element x is
the first greater element on the right side of x in array. Elements for which no greater element exist,
consider next greater element as -1.
*/

#include <iostream>
using namespace std;

int* Next_Greater_Element(int* arr, int n, int* NGE)
{
    int count;
    for (int i = 0; i < n; i++) {
        count = 0;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                NGE[i] = arr[j];
                count++;
                break;
            }
        }
        if (count == 0)
            NGE[i] = -1;
    }
    return NGE;
}
int main()
{
    int size;
    cout << "Enter the size of array ";
    cin >> size;

    int* arr = new int[size];
    cout << "\nEnter array element: ";
    for (int i = 0; i < size; i++)
        cin >> *(arr + i);

    int* NGE = new int[size];
    NGE = Next_Greater_Element(arr, size, NGE);

    cout << "\nNext Greater Element for corresponding value of array is: ";
    for (int i = 0; i < size; i++)
        cout << NGE[i] << " ";
}
