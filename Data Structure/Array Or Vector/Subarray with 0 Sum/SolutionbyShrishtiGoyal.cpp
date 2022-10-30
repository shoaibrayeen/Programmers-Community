#include <bits/stdc++.h>
using namespace std;

// subarray with 0 sum
bool isSumZero(vector<int> arr)
{
    int n = arr.size();
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
    int n, a;
    cin >> n;
   vector<int> arr;
    for (int i = 0; i < n; i++) {
        cin >> a;
        arr.push_back(a);
    }
    if (isSumZero(arr))
        cout << "true";
    else
        cout << "false";
    return 0;
}
