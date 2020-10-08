//PROGRAM TO CONVERT A NUMBER FROM DECIMAL TO BINARY
//RUNNING CODE


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    stack<int> s;

    while (n > 0)
    {
        if (n % 2 == 0)
        {
            // cout << n;
            s.push(0);
        }
        else
        {
            s.push(1);
        }
        n = n / 2;
    }
    // cout << "g" << s.size() << "G";
    while (s.empty() == false)
    {
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}