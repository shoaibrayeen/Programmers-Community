#include <iostream>
using namespace std;

int findMissing(int arr[], int n)
{
    int x1 = arr[0];
    int x2 = 1;

    for (int i = 1; i < n; i++)
        x1 = x1 ^ arr[i];

    for (int i = 2; i <= n + 1; i++)
        x2 = x2 ^ i;

    return (x1 ^ x2);
}

int main()
{
    int n;
    cout << "Enter the size of an array:" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the elements of an array:" << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << findMissing(arr, n);

    return 0;
}