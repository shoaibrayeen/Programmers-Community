#include <iostream>
#include <cstring>
using namespace std;

int editDistance(string s1, string s2)
{
    int m = s1.length();
    int n = s2.length();

    int **storage = new int *[m + 1];

    for (int i = 0; i <= m; i++)
    {
        storage[i] = new int[n + 1];
    }
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i == 0)
                storage[i][j] = j;

            else if (j == 0)
                storage[i][j] = i;

            else if (s1[i - 1] == s2[j - 1])
                storage[i][j] = storage[i - 1][j - 1];

            else
                storage[i][j] = 1 + min(storage[i][j - 1], min(storage[i - 1][j], storage[i - 1][j - 1]));
        }
    }
    int ans = storage[m][n];
    //delete arrays
    for (int i = 0; i <= m; i++)
    {
        delete[] storage[i];
    }
    delete[] storage;
    return ans;
}

int main()
{

    string s1;
    string s2;

    cin >> s1;
    cin >> s2;

    cout << editDistance(s1, s2) << endl;
}
