#include <iostream>
#include <vector>
using namespace std;

// function to convert given array/vector of integers into zigZag format
// performs in O(n) time complexity
vector<int> zigZag(vector<int>& arr, int n)
{
    for (int i = 1; i < n; i += 2) {
        if (i - 1 >= 0 && arr[i - 1] > arr[i])
            swap(arr[i - 1], arr[i]);

        if (i + 1 < n && arr[i + 1] > arr[i])
            swap(arr[i + 1], arr[i]);
    }

    return arr;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    arr = zigZag(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
