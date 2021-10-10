#include <iostream>
using namespace std;

int findPivot(int arr[], int low, int high)
{
    if (high < low)
        return -1;

    if (high == low)
        return low;

    int mid = (high + low) / 2;
    if (mid < high && arr[mid + 1] < arr[mid])
        return mid;

    if (mid > low && arr[mid] < arr[mid - 1])
        return mid - 1;

    if (arr[low] > arr[mid])
        return findPivot(arr, low, mid - 1);

    else
        return findPivot(arr, mid + 1, high);
}

bool isSortedRotated(int arr[], int n)
{
    int low = 0;
    int high = n - 1;
    int pivot = -1;

    if (arr[low] > arr[high]) {
        pivot = findPivot(arr, low, high);
        if (low < pivot) {
            while (pivot > low) {
                if (arr[pivot] < arr[pivot - 1]) {
                    return false;
                }
                pivot--;
            }
        } else {
            pivot++;
            while (pivot < high) {
                if (arr[pivot] > arr[pivot + 1]) {
                    return false;
                }
                pivot++;
            }
        }

        return true;
    }

    else {
        return false;
    }
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

    if (isSortedRotated(arr, n)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}