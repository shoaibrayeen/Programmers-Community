#include <bits/stdc++.h>
using namespace std;

void findNumbers(vector<int>& ar, int sum, vector<vector<int>>& res, vector<int>& r, int i)
{
    if (sum < 0) {
        return;
    }
    if (sum == 0) {
        res.push_back(r);
        return;
    }
    while (i < ar.size() && sum - ar[i] >= 0) {
        r.push_back(ar[i]);
        findNumbers(ar, sum - ar[i], res, r, i);
        i++;
        r.pop_back();
    }
}

vector<vector<int>> combinationSum(vector<int>& ar, int sum)
{
    sort(ar.begin(), ar.end());
    ar.erase(unique(ar.begin(), ar.end()), ar.end());
    vector<int> r;
    vector<vector<int>> res;
    findNumbers(ar, sum, res, r, 0);
    return res;
}

int main()
{
    int n;
    cout << "\nEnter Size\t:\t";
    cin >> n;
    cout << "\nEnter Elements\n";
    vector<int> a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int sum;
    cout << "\nEnter Sum\t:\t";
    cin >> sum;
    vector<vector<int>> res = combinationSum(a, sum);
    if (res.size() == 0) {
        cout << "\nNo Possible Solution for given sum\n";
        return 0;
    }
    for (int i = 0; i < res.size(); i++) {
        if (res[i].size() > 0) {
            cout << " ( ";
            for (int j = 0; j < res[i].size(); j++) {
                cout << res[i][j] << " ";
            }
            cout << ")";
        }
    }
    return 0;
}
