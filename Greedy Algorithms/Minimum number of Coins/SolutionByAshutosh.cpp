#include <bits/stdc++.h>
using namespace std;
int main()
{
    //given
    int value = 0;
    vector<int> denominations = { 1, 2, 5, 10, 20, 50, 100, 200, 500, 1000, 2000 };
    // temp
    int count = 0, n = denominations.size() - 1;
    int cur_value = denominations[n]; //taking denominations in decreasing order
    cin >> value;
    while (value > 0) {
        if (value >= cur_value) {
            value -= cur_value;
            count++;
        } else {
            n--;
            cur_value = denominations[n];
        }
    }
    cout << count;
    return 0;
}