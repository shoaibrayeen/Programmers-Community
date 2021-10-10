#include <cstdlib>
#include <iostream>

using namespace std;

float power(int n, int p)
{
    int i, x;
    float pr, c = 1.0;
    x = abs(p);
    for (i = 1; i <= x; i++) {
        c = c * n;
    }
    if (p >= 0) {
        pr = c;
    }

    if (p < 0) {
        pr = 1 / c;
    }
    return pr;
}

int main()
{
    int num, pow;
    cout << "Enter number and power\n";
    cin >> num >> pow;

    cout << "power : " << power(num, pow);

    return 0;
}
