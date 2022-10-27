#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, K, a;
    cout << "enter size of array" << endl;
    cin >> N;
    vector<int> arr;
    cout << "enter elements of array" << endl;
    for (int i = 0; i < N; i++) {
        cin >> a;
        arr.push_back(a);
    }
    cout << "enter K" << endl;
    cin >> K;
    sort(arr.begin(), arr.end());
    cout << K << "th smallest element in the given array is : " << arr[K - 1] << endl;
    return 0;
}
