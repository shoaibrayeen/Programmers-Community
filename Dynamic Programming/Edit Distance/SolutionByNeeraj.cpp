#include <iostream>
using namespace std;

int min(int a, int b, int c)
{
    if (a < b && a < c)
        return a;
    else if (b < c)
        return b;
    else
        return c;
}

int EditDistance(string X, string Y, int n, int m)
{
    int t[n + 1][m + 1];

    t[0][0] = 0;
    for (int i = 1; i < n + 1; i++)
        t[i][0] = i;

    for (int i = 1; i < m + 1; i++)
        t[0][i] = i;

    for (int i = 1; i < n + 1; i++) {
        for (int j = 1; j < m + 1; j++) {
            if (X[i - 1] == Y[j - 1])
                t[i][j] = t[i - 1][j - 1];

            else
                t[i][j] = min(1 + t[i - 1][j], 1 + t[i][j - 1], 1 + t[i - 1][j - 1]);
        }
    }

    return t[n][m];
}

int main()
{
    string X, Y;

    cout << "Enter first string  ";
    cin >> X;

    cout << "Enter second string ";
    cin >> Y;

    cout << EditDistance(X, Y, X.size(), Y.size());
}
