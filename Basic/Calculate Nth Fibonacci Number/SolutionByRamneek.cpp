#include <iostream>

using namespace std;

int fibonacci(int x)
{
    int a, b, c, i;
    a = 0;
    b = 1;

    if (x == 1) {
        return 0;
    }

    else if (x == 2) {
        return 1;
    }

    else {
        for (i = 3; i <= x; i++) {

            c = a + b;
            a = b;
            b = c;
        }

        return c;
    }
}

int main()
{
    int n;

    cout << "Enter the value of n\n";
    cin >> n;

    cout << n << "th Number in Fibonacci Series :- " << fibonacci(n);

    return 0;
}
