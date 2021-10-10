#include <iostream>
using namespace std;

int minElement(int arr[], int n)
{
    int min = arr[0];
    for (int i = 0; i < n; i++) {
        if (arr[i] < min)
            min = arr[i];
    }

    return min;
}

int main()
{
    int n;
    cout << "Enter the size of array:" << endl;
    cin >> n;
    int arr[n];
    cout << "\nEnter the elements of array" << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "\nMinimum element in an array is: " << minElement(arr, n);

    return 0;
}