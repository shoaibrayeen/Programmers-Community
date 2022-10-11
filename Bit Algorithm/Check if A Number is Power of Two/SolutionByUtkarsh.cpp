#include <bits/stdc++.h>
using namespace std;
/*
Time Complexity: O(1)
Auxiliary Space: O(1)
*/

//cheking given num is power of 2 or not
bool isPowerOfTwo(int n)
{
    if (n == 0) {
        return false;
    }
    return ((n & (n - 1)) == 0);
}

int main()
{
    int num;
    cin >> num;
    if (isPowerOfTwo(num))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
