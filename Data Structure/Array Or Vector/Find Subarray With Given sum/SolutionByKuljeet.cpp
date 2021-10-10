#include <iostream>
using namespace std;

bool isSubarraySum(int arr[], int n, int sum)
{
    int current_sum = arr[0];
    int start = 0;
    for (int end = 1; end < n; end++) {
        //Clean the previous window
        while (current_sum > sum && start < end - 1) {
            current_sum -= arr[start];
            start++;
        }

        if (current_sum == sum)
            return true;

        if (end < n)
            current_sum += arr[end];
    }

    return (current_sum == sum);
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

    int sum;
    cout << "Enter the Sum :" << endl;
    cin >> sum;
    if (isSubarraySum(arr, n, sum))
        cout << "Yes" << endl;

    else
        cout << "No";
    return 0;
}