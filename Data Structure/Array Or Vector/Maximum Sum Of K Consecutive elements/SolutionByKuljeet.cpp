#include <algorithm>
#include <iostream>
using namespace std;

int getMaxSumKConsecutive(int arr[], int n, int k)
{
    int current_sum = 0;
    for (int i = 0; i < k; i++)
        current_sum += arr[i];

    int max_sum = current_sum;
    for (int j = k; j < n; j++) {
        current_sum += (arr[j] - arr[j - k]);
        max_sum = max(max_sum, current_sum);
    }

    return max_sum;
}

int main()
{
    int n;
    cout << "Enter the size of an array: " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the elements of an array: " << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int k;
    cout << "Enter the value of K: " << endl;
    cin >> k;
    cout << "Maximum Sum of " << k << " Consecutive elements is: " << getMaxSumKConsecutive(arr, n, k);
    return 0;
}