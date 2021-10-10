#include <bits/stdc++.h>
using namespace std;
void leaders(int* arr, int n)
{
    int rightLeader = arr[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        if (rightLeader <= arr[i]) {
            rightLeader = arr[i];
            cout << rightLeader << " ";
        }
    }
    return;
}

int main()
{
    int n;
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << arr[n - 1] << " ";
    leaders(arr, n);
    delete[] arr;
    return 0;
}
