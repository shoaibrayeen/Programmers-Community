#include <iostream>
using namespace std;

bool LeapORnot(int n)
{

    if (n % 400 == 0)
        return true;

    if (n % 4 == 0 && n % 100 != 0)
        return true;

    return false;
}

int main()
{
    int n;
    cin >> n; // taking input

    LeapORnot(n) ? cout << "Yes" : cout << "No";
}
