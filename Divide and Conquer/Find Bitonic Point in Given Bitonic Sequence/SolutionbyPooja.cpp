/*
    You are given a bitonic sequence, the task is to find Bitonic Point in it. A Bitonic Sequence is a sequence of numbers which is first strictly increasing then
    after a point strictly decreasing.A Bitonic point doesn’t exist if array is only decreasing or only increasing.

    input: arr[]: {24, 69, 100, 99, 79, 78, 67, 36, 25, 19}
    output: 2

    input: arr[]: {3, 4, 5, 1}
    output: 2
*/

#include <iostream>
using namespace std;

int BitonicPoint(int* arr, int n)
{
    int start = 0;
    int end = n - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        int prev = (mid + n - 1) % n;
        int next = (mid + 1) % n;

        if (arr[prev] <= arr[mid] && arr[next] < arr[mid]) // check if mid element is largest element or not
            return mid;
        else if (arr[mid] > arr[next]) // element after mid is in decreasing order that's imply largest lies left of mid element
            end = mid - 1;

        else
            start = mid + 1;
    }
    return -1;
}

int main()
{
    int n;
    cout << "Enter size ? ";
    cin >> n;

    int* arr = new int[n];
    for (int i = 0; i < n; i++)
        cin >> i[arr];

    int index = BitonicPoint(arr, n);

    if (index == 0 || index == n - 1)
        cout << "Bitonic Point does not exist ";
    else
        cout << "Bitoninc Element : " << arr[index];
}
