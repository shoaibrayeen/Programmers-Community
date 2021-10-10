#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main()
{
    vector<int> ar;

    int n;

    cout << "Enter the Number " << endl;
    cin >> n;
    int total = 0, sum = 0;
    for (int i = 0; i < n - 1; i++) {
        int tt;
        cin >> tt;
        ar.push_back(tt);
        sum += tt;
    }

    total = (n * (n + 1)) / 2;

    int rem = total - sum;

    cout << "Missing Number " << rem << endl;

    return 0;
}
