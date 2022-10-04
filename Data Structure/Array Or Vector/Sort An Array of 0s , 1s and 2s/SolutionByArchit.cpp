#include <iostream>
#include <algorithm>
using namespace std;

void sort012(int *arr, int n) { 
    int i = 0; 
    int nextZero = 0; 
    int nextTwo = n - 1; 
    while (i <= nextTwo) { 
        if (arr[i] == 0) { 
            int temp = arr[i]; 
            arr[i] = arr[nextZero]; 
            arr[nextZero] = temp; i++; 
            nextZero++; 
        } else if (arr[i] == 2) { 
            int temp = arr[i]; 
            arr[i] = arr[nextTwo]; 
            arr[nextTwo] = temp; 
            nextTwo--; 
        } else { 
            i++; 
        } 
    } 
}

int main()
{
    int size;

    cin >> size;
    int *arr = new int[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    sort012(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    delete[] arr;
    cout << endl;

    return 0;
}
