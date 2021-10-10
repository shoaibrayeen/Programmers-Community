#include <iostream> // Header Files
using namespace std;

int gcd(int x, int y)
{
    if (y == 0)
        return x;

    return gcd(y, x % y);
}

int main()
{
    int x, y;
    cout << "\n Enter value of two numbers:";
    cin >> x >> y;
    cout << "GCD of " << x << " and " << y << " is " << gcd(x, y);

    return 0;
}
