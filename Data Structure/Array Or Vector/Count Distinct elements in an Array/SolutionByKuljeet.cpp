#include <algorithm>
#include <iostream>
#include <unordered_set>
using namespace std;

int countDistinct(int arr[], int n)
{
    unordered_set<int> s;
    int res = 0;
    for (int i = 0; i < n; i++) {
        if (s.find(arr[i]) == s.end()) {
            s.insert(arr[i++]);
            res++;
        }
    }

    return res;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << countDistinct(arr, n);
    return 0;
}
