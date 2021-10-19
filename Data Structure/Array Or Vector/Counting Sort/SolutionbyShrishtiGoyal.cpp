#include <bits/stdc++.h>
using namespace std;


void count_sort(vector<int> &arr, int n)
{
    int maximum = INT_MIN;
    for (int i = 0; i < n; i++) {
        maximum = max(maximum, arr[i]);
    }

    
   vector<int> freq(maximum+1,0);
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    
    int pointer = 0;
    for (int i = 0; i < maximum + 1; i++) {
        while (freq[i] > 0) {
            arr[pointer] = i;
            pointer++;
            freq[i]--;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    count_sort(a, n);

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}
