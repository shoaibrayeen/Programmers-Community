#include <bits/stdc++.h>
using namespace std;

bool subArrayExist(int arr[], int n)
{
    unordered_set<int> sumSet;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        if (sum == 0 || sumSet.find(sum) != sumSet.end())
            return true;
        sumSet.insert(sum);
    }
    return false;
}

int main()
{
    int n;
    cout << "Enter the size of an array: " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the elements of an array: " << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    if (subArrayExist(arr, n))
        cout << "True";
    else
        cout << "False";
    return 0;
}