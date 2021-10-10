#include <bits/stdc++.h>
using namespace std;
// function to check whether a number is odd or even
string evenOdd(int Number)
{
    if (Number & 1 == 0) {
        return "Even";
    } else {
        return "Odd";
    }
}
// Main function
int main()
{
    int t;
    cin >> t;
    while (t--) {
        int num;
        cin >> num;
        string str = evenOdd(num);
        cout << str << endl;
    }
    return 0;
}