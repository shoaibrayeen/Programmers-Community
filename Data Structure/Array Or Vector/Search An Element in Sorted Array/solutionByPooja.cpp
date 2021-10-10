/*
    A Sorted Array is given. You need to find an element which is given to you.

*/
#include <iostream>
using namespace std;

bool check_for_element(int* arr, int size, int element)
{
    int beg = 0, end = size - 1, mid;

    while (beg <= end) {
        mid = (beg + end) / 2;

        if (arr[mid] == element)
            return 1;
        else if (arr[mid] > element)
            end = mid - 1;
        else
            beg = mid + 1;
    }
    return 0;
}

int main()
{
    int size, element;
    bool check;
    cout << "Enter the size of array ";
    cin >> size;

    int* arr = new int[size];
    cout << "Enter element of array(sorted value) ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    cout << "Enter an element that you want to search ";
    cin >> element;

    check = check_for_element(arr, size, element);

    if (check == 1)
        cout << "YES";
    else
        cout << "NO";
}
