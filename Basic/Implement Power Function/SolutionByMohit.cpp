#include <iostream>
using namespace std;

int powbtr(int x, int n)
{
    if (n == 0) {
        return 1;
    }
    int mn1 = powbtr(x, n / 2);
    int res1 = mn1 * mn1;
    if (n % 2 == 1) {
        res1 = res1 * x;
    }
    return res1;
}

int main(int argc, char** argv)
{
    int b, p;
    cout << "Enter Base\t:\t";
    cin >> b;
    cout << "Enter Power\t:\t";
    cin >> p' cout << powbtr(b, p) << endl;
}
