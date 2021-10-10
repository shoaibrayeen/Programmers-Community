#include <bits/stdc++.h>
using namespace std;

int MaxRainwater(int arr[], int n)
{
    int res = 0;
    int leftMax = arr[0], rightMax = arr[n - 1];
    int i = 0, j = n - 1;
    while (i <= j) { //  max height in left
        leftMax = max(arr[i], leftMax);
        // max height in right
        rightMax = max(arr[j], rightMax);
        if (leftMax <= rightMax) {
            res += leftMax - arr[i];
            i++;
        } else {
            res += rightMax - arr[i];
            j--;
        }
    }

    return res;
}

int main()
{
    int n;
    cout << "Enter the size of an array:" << endl;
    cin >> n;
    int arr[n];
    // input the array
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    // Function to find max rainwater trapped
    cout << MaxRainwater(arr, n);
    return 0;
}
