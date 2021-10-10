/*
An Array is sorted and left rotated and you need to find an element in the Array.
*/
#include <iostream>
using namespace std;

bool is_found(int* arr, int n, int ele)
{
    int smallest = arr[0], count = 0, pos;
    for (int i = 1; i < n; i++) {
        if (arr[i] < smallest) {
            pos = i;
            count++;
            if (count == 1)
                break;
        }
    }
    int beg = pos, end = n - 1, mid;
    while (beg <= end) { //this while loop search for an element on the right side of smallest element
        mid = (beg + end) / 2;
        if (arr[mid] == ele)
            return 1;
        else if (arr[mid] > ele)
            end = mid - 1;
        else
            beg = mid + 1;
    }
    beg = 0, end = pos - 1;
    while (beg <= end) {
        mid = (beg + end) / 2; //this while loop search for an element on the left side of smallest element
        if (arr[mid] == ele)
            return 1;
        else if (arr[mid] > ele)
            end = mid - 1;
        else
            beg = mid + 1;
    }
    return 0;
}

int main()
{
    int size, element;
    cout << "Enter the size of array ";
    cin >> size;

    int* arr = new int[size];
    cout << "Enter sorted and rotated array ";
    for (int i = 0; i < size; i++)
        cin >> *(arr + i);

    cout << "\nEnter element you want to search ";
    cin >> element;
    bool check = is_found(arr, size, element);
    if (check == 1)
        cout << "\nYES";
    else
        cout << "\nNO";
}
