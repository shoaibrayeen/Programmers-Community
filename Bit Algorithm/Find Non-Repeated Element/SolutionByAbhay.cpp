#include <bits/stdc++.h>
using namespace std;
int nonRepeated(vector<int>& v)
{
    int x = v[0];
    for (int i = 1; i < v.size(); i++) {
        x ^= v[i];
    }
    return x;
}
int main(int argc, char const* argv[])
{
    int n;
    cin >> n;
    vector<int> v1(n);
    for (int i = 0; i < n; i++) {
        cin >> v1[i];
    }
    cout << "\nNon Repeated Element\t:\t" << nonRepeated(v1) << endl;
    return 0;
}
