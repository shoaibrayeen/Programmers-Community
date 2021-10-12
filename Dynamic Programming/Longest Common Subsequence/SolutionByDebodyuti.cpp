//Space optimized C++ implementation
// of LCS problem

#include<bits/stdc++.h>
using namespace std;


int lcs(string &X, string &Y)
{

    int m = X.length(), n = Y.length();
    int L[2][n + 1];
    bool bi;

    for (int i = 0; i <= m; i++)
    {

        bi = i & 1;
        for (int j = 0; j <= n; j++)
        {
            if (i == 0 || j == 0)
                L[bi][j] = 0;

            else if (X[i-1] == Y[j-1])
                 L[bi][j] = L[1 - bi][j - 1] + 1;

            else
                L[bi][j] = max(L[1 - bi][j],
                               L[bi][j - 1]);
        }
    }

    return L[bi][n];
}

// Driver code
int main()
{
    string X ;
    string Y ;
    cin >> X >> Y ;
    printf("Length of LCS is %d\n", lcs(X, Y));
    return 0;
} 