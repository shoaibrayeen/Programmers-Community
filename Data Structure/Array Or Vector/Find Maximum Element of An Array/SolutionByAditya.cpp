#include <bits/stdc++.h>
using namespace std;

int maxElementInArray(int arr[], int sizeOfArray)
{
    int maxElement = INT_MIN;
    for (int i = 0; i < sizeOfArray; i++)
        maxElement = max(maxElement, arr[i]);
    return maxElement;
}

int main()
{
    int numberOfElements = 0;
    int arr[10000];
    cout << "\nEnter number of Elements: ";
    cin >> numberOfElements;
    cout << "\nEnter the Elements: ";
    for (int i = 0; i < numberOfElements; i++)
        cin >> arr[i];
    cout << "\nMaximum Element of Array is: " << maxElementInArray(arr, numberOfElements);
    return 0;
}
