#include <bits/stdc++.h>
using namespace std;
int add(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int finalsum;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    finalsum = add(arr, n);
    cout << finalsum;
    return 0;
}
