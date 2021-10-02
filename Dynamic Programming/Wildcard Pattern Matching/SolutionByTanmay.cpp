#include<iostream>
using namespace std;

bool wildCard(string pattern,string str)
{
    int n = str.size(), m = pattern.size();
    bool dp[n+1][m+1];
    memset(dp, 0, sizeof(dp));
    dp[0][0] = true;

    for (int i=1;i<=m;i++)
        if (pattern[i-1] == '*')
            dp[0][i] = dp[0][i-1];

    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=m;j++)
        {
            if (str[i-1]==pattern[j-1] || pattern[j-1]=='?')
                dp[i][j] = dp[i-1][j-1];
            else{
                if (pattern[j-1] == '*')
                    dp[i][j] = dp[i-1][j] || dp[i][j-1];
                else
                    dp[i][j] = false;
            }
        }
    }
    return dp[n][m];
}

int main()
{
   string pattern = "a*c?b";
   string txt = "acdcb";
   cout<<(wildCard(pattern, txt) ? "True" : "False";
   return 0;
}
