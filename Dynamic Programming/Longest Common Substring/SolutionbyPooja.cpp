/*
    find the length of longest Substring.
*/

#include <iostream>
using namespace std;

int max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int Length_of_LongestCommonSubString(string X, string Y, int n, int m)
{
    int t[n + 1][m + 1];

    for (int i = 0; i < n + 1; i++)
        t[i][0] = 0;

    for (int i = 0; i < m + 1; i++)
        t[0][i] = 0;

    for (int i = 1; i < n + 1; i++) {
        for (int j = 1; j < m + 1; j++) {
            if (X[i - 1] == Y[j - 1])
                t[i][j] = 1 + t[i - 1][j - 1];

            else
                t[i][j] = 0;
        }
    }

    int mn = t[0][0];
    for (int i = 0; i < n + 1; i++) {
        for (int j = 0; j < m + 1; j++)
            mn = max(mn, t[i][j]);
    }

    return mn;
}

int main()
{
    string X, Y;

    cout << "Enter first string  ";
    cin >> X;

    cout << "Enter second string ";
    cin >> Y;

    cout << Length_of_LongestCommonSubString(X, Y, X.size(), Y.size());
}
