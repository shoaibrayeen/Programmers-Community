#include <bits/stdc++.h>
using namespace std;
bool sumZero(int* arr, int n)
{

    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum += arr[j];
            if (sum == 0)
                return true;
        }
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    if (sumZero(arr, n))
        cout << "true";
    else
        cout << "false";
    delete[] arr;
    return 0;
}
