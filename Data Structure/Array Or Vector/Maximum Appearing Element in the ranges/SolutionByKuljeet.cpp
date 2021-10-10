#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int getMaxOccuringElement(int L[], int R[], int n)
{
    vector<int> arr[1000];
    for (int i = 0; i < n; i++) {
        arr[L[i]]++;
        arr[R[i] + 1]--;
    }

    int maxm = arr[0], res = 0;

    for (int i = 1; i < 1000; i++) {
        arr[i] += arr[i - 1];
        if (maxm < arr[i]) {
            maxm = arr[i];
            res = i;
        }
    }

    return res;
}

int main()
{
    int n;
    cout << "Enter the size of an array: " << endl;
    cin >> n;
    int L[n];
    cout << "Enter the elements of L range: " << endl;
    for (int i = 0; i < n; i++)
        cin >> L[i];
    int R[n];
    cout << "Enter the elements of R range: " << endl;
    for (int i = 0; i < n; i++)
        cin >> R[i];

    cout << "Maximum occuring element in the ranges is:" << getMaxOccuringElement(L, R, n);
    return 0;
}