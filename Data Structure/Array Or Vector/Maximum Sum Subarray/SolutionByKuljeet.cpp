#include <algorithm>
#include <iostream>
using namespace std;

int getMaxSumSubarray(int arr[], int n)
{
    int result = arr[0];
    int maxEnding = arr[0];

    for (int i = 1; i < n; i++) {
        maxEnding = max(maxEnding + arr[i], arr[i]);
        result = max(result, maxEnding);
    }

    return result;
}

int main()
{
    int n;
    cout << "Enter the size of an array:" << endl;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Maximum sum of subarray is: " << getMaxSumSubarray(arr, n);

    return 0;
}