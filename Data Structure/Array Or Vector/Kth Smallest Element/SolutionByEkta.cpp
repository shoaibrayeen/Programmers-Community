/*
  program to find the Kth smallest element in the given array
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, K;
    cout << "enter size of array" << endl;
    cin >> N;
    int arr[N];
    cout << "enter elements of array" << endl;
    for (int n = 0; n < N; n++) {
        cin >> arr[n];
    }
    cout << "enter K" << endl;
    cin >> K;
    sort(arr, arr + N);
    cout << K << "th smallest element in the given array is : " << arr[K - 1] << endl;
    return 0;
}
