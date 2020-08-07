/*
  Given a sequence, find the length of the longest palindromic subsequence in it.

  input: a : BBABCBCAB
  output 5

  explaination           a: BBABCBCAB
                reverse(a): BACBCBABB
                       LCS: BABCBAB   O/P:- 5
*/

#include<iostream>
#include<algorithm>
using namespace std;

int max(int a, int b)
{
    if(a > b)
        return a;
    else
        return b;
}

int LCS(string X, string Y, int n, int m)
{
    int t[n + 1][m + 1];

    for(int i =0; i < n + 1; i++)
        t[i][0] = 0;

    for(int i = 0; i < m + 1; i++)
        t[0][i] = 0;

    for(int i = 1; i < n + 1; i++)
    {
        for(int j = 1; j < m + 1; j++)
        {
             if(X[i - 1] == Y[j - 1])
                t[i][j] = 1 + t[i - 1][j - 1];

            else
                t[i][j]= max(t[i - 1][j], t[i][j - 1]);
        }
    }

    return t[n][m];
}

int LargestPalindromicSubsequence(string X)
{
    string Y = X;
    reverse(X.begin(), X.end());
    return LCS(Y, X, X.size(), X.size());
}


int main()
{
    string X;

    cout << "Enter  string  ";
    cin >> X;


    cout << LargestPalindromicSubsequence(X);
}
