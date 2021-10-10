#include <iostream>
using namespace std;

int fib(int n)
{
    if (n == 1) {
        return 0;
    } else if (n == 2) {
        return 1;
    } else {
        return fib(n - 1) + fib(n - 2);
    }
}

int main()
{
    int n;
    cout << "\nEnter N\t:\t";
    cin >> n;
    cout << "The " << n << "th fibonacci number\t:\t" << fib(n) << endl;
    return 0;
}
