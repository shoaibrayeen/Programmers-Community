#include <iostream>
using namespace std;

bool binarySearch(int arr[], int start, int end, int k)
{
    if (start > end) {
        return false;
    }
    int mid = (start + end) / 2;
    if (arr[mid] == k) {
        return true;
    }
    if (arr[mid] > k) {
        return binarySearch(arr, start, mid - 1, k);
    } else {
        return binarySearch(arr, mid + 1, end, k);
    }
}

int main()
{
    int arr[100];
    int size1, k; //k is the no. we need to search
    cin >> size1;
    for (int i = 0; i < size1; i++) {
        cin >> arr[i];
    }
    cin >> k;
    //start and end are starting and ending indices of the given array
    int start = 0;
    int end = size1 - 1;
    if (binarySearch(arr, start, end, k)) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}
