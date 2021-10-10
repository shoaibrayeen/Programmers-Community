//An Array is given with 0s and 1s and you need to sort the array.

#include <iostream>
using namespace std;

void sort(int* arr, int n)
{
    int i, j;
    i = 0;
    j = n - 1;

    while (i <= j) {

        if (arr[i] == 1 && arr[j] == 0) {
            arr[i] = 0;
            arr[j] = 1;
        }

        if (arr[i] != 1)
            i++;
        if (arr[j] != 0)
            j--;
    }
}

int main()
{
    int size;

    cout << "Enter size ";
    cin >> size;

    int* arr = new int[size];
    cout << "Enter the array element(only 0 and 1) ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    sort(arr, size);

    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}
