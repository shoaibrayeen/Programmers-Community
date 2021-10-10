#include <algorithm>
#include <iostream>
using namespace std;

void countSort(int arr[], int n, int k)
{
    int count[n];
    for (int i = 0; i < k; i++)
        count[i] = 0;

    for (int i = 0; i < n; i++)
        count[arr[i]]++;

    for (int i = 1; i < k; i++)
        count[i] = count[i - 1] + count[i];

    int output[n];
    for (int i = n - 1; i >= 0; i--) {
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }

    for (int i = 0; i < n; i++)
        arr[i] = output[i];

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int k;
    cin >> k;
    countSort(arr, n, k);
    return 0;
}