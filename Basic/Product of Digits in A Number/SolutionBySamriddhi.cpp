/* A Number is given and You need to find product of all digits in the number And If any digit is zero, ignore that. */

#include <iostream>
using namespace std;

int product(int n)
{
    if (n == 0) {
        return 0;
    }
    int prod = 1, j;
    while (n != 0) {
        j = n % 10;
        if (j != 0)
            prod *= j;
        n /= 10;
    }
    return prod;
}
int main()
{

    int n;
    cin >> n;
    cout << product(n);
    return 0;
}
