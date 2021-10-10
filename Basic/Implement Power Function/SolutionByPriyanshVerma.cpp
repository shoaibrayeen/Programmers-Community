#include <iostream>
using namespace std;

// recursive function to calculate power in O(log(n))
// handles negative bases and negative powers too.
double power_fn(double b, int p)
{
    double tmp;
    if (p == 0)
        return 1;

    tmp = power_fn(b, p / 2);

    if (p % 2 == 0) {
        return tmp * tmp;
    } else {
        if (p > 0)
            return b * tmp * tmp;
        else
            return (tmp * tmp) / b;
    }
}

int main()
{
    double base;
    cin >> base;
    int power;
    cin >> power;

    cout << power_fn(base, power);

    return 0;
}
