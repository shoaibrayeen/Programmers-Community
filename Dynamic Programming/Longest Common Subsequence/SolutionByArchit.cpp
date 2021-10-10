#include <cstring>
#include <iostream>
using namespace std;

/* Time complexity: O(M * N) Space complexity: O(M * N) Where M and N are the lengths of strings 's' and 't' respectively */
int lcs(string s, string t)
{
    int m = s.size();
    int n = t.size();
    int** ans = new int*[m + 1];
    for (int i = 0; i <= m; i++) {
        ans[i] = new int[n + 1];
    }
    // First row
    for (int j = 0; j <= n; j++) {
        ans[0][j] = 0;
    }
    // First col
    for (int i = 0; i <= m; i++) {
        ans[i][0] = 0;
    }
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (s[m - i] == t[n - j]) {
                ans[i][j] = 1 + ans[i - 1][j - 1];
            } else {
                ans[i][j] = max(ans[i - 1][j], ans[i][j - 1]);
            }
        }
    }
    return ans[m][n]; // Returns the length of the Longest Common Subsequence.
}

int main()
{
    string s;
    string t;
    // The first line of input contains the string 'S' of length 'M'.
    // The second line of the input contains the string 'T' of length 'N'.
    cin >> s;
    cin >> t;

    cout << lcs(s, t) << endl;
}
