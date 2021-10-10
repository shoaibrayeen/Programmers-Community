#include <iostream>
using namespace std;

float power(float base, int pow)
{
    float tmp;
    if (pow == 0)
        return 1;

    tmp = power(base, pow / 2);

    if (pow % 2 == 0) {
        return tmp * tmp;
    } else if (pow > 0) {
        return base * tmp * tmp;
    } else {
        return (tmp * tmp) / base;
    }
}

int main()
{
    float base;
    cin >> base;

    int pow;
    cin >> pow;

    cout << "Answer: " << power(base, pow) << endl;
    return 0;
}
