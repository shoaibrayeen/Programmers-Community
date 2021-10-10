/*
    An Array is given with 0s, 1s and 2s and you need to sort the array.
    Constraints
                1 < size Of Array <= 10^6
                0 <= Array Elements <= 2
*/

#include <iostream>
using namespace std;

int* sort(int* arr, int size)
{
    int temp, j;
    for (int i = 0; i < size - 1; i++) {
        temp = arr[i + 1];
        j = i;
        while (temp < arr[j] && j >= 0) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
    return arr;
}

int main()
{
    int size;
    cout << "Enter size ";
    cin >> size;

    if (size > 0) {
        int* arr = new int[size];
        cout << "\nEnter the array element(only 0 ,1 and 2) ";
        for (int i = 0; i < size; i++)
            cin >> arr[i];
        arr = sort(arr, size);

        for (int i = 0; i < size; i++)
            cout << arr[i] << " ";
    }
}
