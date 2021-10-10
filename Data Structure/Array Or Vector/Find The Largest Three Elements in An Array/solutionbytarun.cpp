
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cin >> size;
    int arr[size];
    //taking input
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    //sort the array
    sort(arr, arr + size);
    int arr2[3];
    //output array of size 3
    arr2[2] = arr[size - 1];
    arr2[1] = arr[size - 2];
    arr2[0] = arr[size - 3];
    for (int i = 0; i < 3; i++) {
        cout << arr2[i] << " ";
    }
}
