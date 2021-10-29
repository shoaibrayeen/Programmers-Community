#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int arr[123] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        int temp = int(s[i] + 0);

        arr[temp]++;
    }
    int count = 0;
    for (int i = 97; i <= 122; i++)
    {
        if (arr[i] == 0 && arr[i - 32] == 0)
        {
            cout << "not pangram";
            count = 1;
            break;
        }
    }
    if (count == 0)
    {
        cout << "pangram";
    }
    return 0;
}
