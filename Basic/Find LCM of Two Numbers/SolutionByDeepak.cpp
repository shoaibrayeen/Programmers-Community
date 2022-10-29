#include <iostream>
using namespace std;
int display_lcm(long a, long b)
{

    int max, min, i;
    if (a > b) {
        max = a;
        min = b;
    } else {
        max = b;
        min = a;
    }
    i = max;
    while (1) {
        if (i % min == 0) {

            return i;
        } else {

            i += max;
        }
    }
}
int main()
{
    long a, b;
    cout << "Enter the numbers: \n";
    cin >> a >> b;
    cout << "The LCM of " << a << " and " << b << " is " << display_lcm(a, b);
    return 0;
}
