/*
   Given a string, print the longest repeating subsequence such that the two subsequence don’t have same string character at same position, i.e., any i’th character
   in the two subsequences shouldn’t have the same index in the original string.

   Input: str = "aabb"
   Output: "ab"

*/

#include <iostream>
using namespace std;

string max(string a, string b)
{
    if (a.size() > b.size())
        return a;
    else
        return b;
}

string LongestReapeatedSubsequce(string X)
{
    int n = X.size();
    string t[n + 1][n + 1];

    for (int i = 0; i < n + 1; i++) {
        t[i][0] = "";
        t[0][i] = "";
    }

    for (int i = 1; i < n + 1; i++) {
        for (int j = 1; j < n + 1; j++) {
            if (X[i - 1] == X[j - 1] && i != j)
                t[i][j] = t[i - 1][j - 1] + X[i - 1];

            else
                t[i][j] = max(t[i - 1][j], t[i][j - 1]);
        }
    }

    return t[n][n];
}

int main()
{
    string X, Y;

    cout << "Enter string  ";
    cin >> X;

    cout << LongestReapeatedSubsequce(X);
}
