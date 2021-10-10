/*
    Given an array of integers, task is to print the array in the order – smallest number,
    Largest number, 2nd smallest number, 2nd largest number, 3rd smallest number, 3rd largest number and so on.
*/

#include <iostream>
using namespace std;

void print_array_arrangement(int* arr, int size)
{
    int temp, i, j; //1st sorting the array;
    for (i = 0; i < size - 1; i++) {
        temp = arr[i + 1];
        j = i;
        while (temp < arr[j] && j >= 0) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }

    for (i = 0, j = size - 1; i <= j; i++, j--) //printing  the pattern
    {
        cout << arr[i] << " ";
        if (i != j)
            cout << arr[j] << " ";
    }
}

int main()
{
    int size;
    cout << "Enter size ";
    cin >> size;

    if (size > 0) {
        int* arr = new int[size];
        cout << "\nEnter the array element ";
        for (int i = 0; i < size; i++)
            cin >> arr[i];
        print_array_arrangement(arr, size);
    }
}
