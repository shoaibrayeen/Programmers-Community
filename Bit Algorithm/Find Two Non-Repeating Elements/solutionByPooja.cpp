/*
     An Array is given and every element is appearing twice except two elements. You need to find those two elements.
*/
#include <iostream>
using namespace std;

void ToFindElement(int arr[], int size)
{
    int temp, i, j, count = 0;
    for (i = 0; i < size - 1; i++) // first sorting element  of array
    {
        temp = arr[i + 1];
        j = i;
        while (temp < arr[j] && j >= 0) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }

    cout << "\nElements not apperaing twice are : ";
    for (i = 0; i < size; i++) //finding non repeated elements;
    {
        if (i == size - 1) {
            cout << arr[i];
            return;
        }
        if (arr[i] == arr[i + 1])
            i = i + 1;
        else {
            cout << arr[i] << " ";
            count++;
            if (count > 1)
                return;
        }
    }
}

int main()
{
    int size;
    cout << "Enter the size of array ";
    cin >> size;

    if (size > 0) {
        int* arr = new int[size];
        cout << "Enter the array element ";
        for (int i = 0; i < size; i++)
            cin >> arr[i];

        ToFindElement(arr, size);
    }
}
