#include <iostream>
using namespace std;

bool check_prime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;

    return true;
}
int main()
{
    int a;
    cout << "Enter the number to be checked. \n";
    cin >> a;
    check_prime(a) ? cout << "Yes\n" : cout << "No\n";
    return 0;
}
