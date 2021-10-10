#include <bits/stdc++.h>
using namespace std;
void oddApperaing(vector<int>& v)
{
    int XOR = 0, res1 = 0, res2 = 0;
    for (int i = 0; i < v.size(); ++i) {
        XOR = XOR ^ v[i];
    }
    int sn = XOR & ~(XOR - 1); //rightmost set bit
    for (int i = 0; i < v.size(); ++i) {
        if ((v[i] & sn) != 0)
            res1 = res1 ^ v[i];
        else
            res2 = res2 ^ v[i];
    }
    cout << res1 << " and " << res2 << endl;
}
int main(int argc, char const* argv[])
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        int number;
        cin >> number;
        v.push_back(number);
    }
    oddApperaing(v);
    return 0;
}