#include <iostream>
using namespace std;

//Complexity is O(log(n))

double power_calc(double b, int p)
{
    double tmp;
    if (p == 0)
        return 1;

    tmp = power_calc(b, p / 2);

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

    cout << power_calc(base, power);

    return 0;
}
