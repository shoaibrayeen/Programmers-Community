#include <iostream>
using namespace std;

int calculate(int base, int power)
{
    if (power == 0) {
        return 1;
    }

    if (power > 0) {
        int total = 1;
        for (int i = 0; i < power; i++) {
            total = total * base;
        }
        return total;
    }

    if (power < 0) {
        power = -1 * power;
        int total = 1;
        for (int i = 0; i < power; i++) {
            total = total * base;
        }
        return (1 / total);
    }
    return -1;
}
int main()
{
    int base, power;
    cout << "enter the values of base and power";
    cin >> base >> power;
    int output = calculate(base, power);
    cout << output;
}
