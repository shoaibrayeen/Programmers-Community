

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
bool sortbysec(const pair<int, int>& a,
    const pair<int, int>& b)
{
    return (a.second < b.second);
}

int main()
{
    int n;
    cin >> n;
    int start[n];
    int end[n];
    for (int i = 0; i < n; i++) {
        cin >> start[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> end[i];
    }
    vector<pair<int, int>> times;
    for (int i = 0; i < n; i++) {
        times.push_back(make_pair(start[i], end[i]));
    }
    sort(times.begin(), times.end(), sortbysec);
    int i = 0;
    vector<pair<int, int>> result;
    result.push_back(times[0]);
    for (int j = 1; j < n; j++) {
        if (times[j].first >= times[i].second) {
            result.push_back(times[j]);
            i = j;
        }
    }
    cout << "Maximum activities selected are =" << result.size() << endl;
    for (int i = 0; i < result.size(); i++) {
        cout << "(" << result[i].first << "," << result[i].second << ")" << endl;
    }
    return 0;
}
