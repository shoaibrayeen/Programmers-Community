#include <bits/stdc++.h>
using namespace std;

vector<int> reverseArray(vector<int> arr, int sizeOfArray)
{
    for (int i = 0; i < sizeOfArray / 2; i++)
        swap(arr[i], arr[sizeOfArray - i - 1]);
    return arr;
}

void printArray(vector<int> arr, int sizeOfArray)
{
    for (int i = 0; i < sizeOfArray; i++)
        cout << arr[i] << " ";
}

int main()
{
    int sizeOfArray = 0;
    cin >> sizeOfArray;
    vector<int> arr(sizeOfArray, 0);
    for (int i = 0; i < sizeOfArray; i++)
        cin >> arr[i];

    vector<int> resultArray = reverseArray(arr, sizeOfArray);
    printArray(resultArray, sizeOfArray);

    return 0;
}
