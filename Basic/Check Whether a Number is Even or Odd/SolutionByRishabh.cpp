#include <iostream>
using namespace std;

bool check(int n)
{
    int k = n / 2;
    if (k * 2 == n)
        return true;
    else
        return false;
}

int main()
{
    int n;
    cout << "Enter Number " << endl;
    cin >> n;

    bool k = check(n);

    if (k)
        cout << "Even" << endl;
    else
        cout << "Odd" << endl;
}
