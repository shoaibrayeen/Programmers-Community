#include <bits/stdc++.h>
using namespace std;
void checkevenOdd(int n)
{
    if (n % 2 == 0) {

        cout << "Even";
    } else {
        cout << "Odd";
    }
}
// Main function
int main()
{

    int n;
    cout << "enter the number : ";
    cin >> n;
    checkevenOdd(n);
    cout << endl;

    return 0;
}
