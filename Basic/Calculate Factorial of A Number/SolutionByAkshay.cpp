#include <iostream>

using namespace std;

long fact(long n)
{
    if (n == 1 || n == 0) {
        return 1;
    } else {
        return n * fact(n - 1);
    }
}

int main()
{
    long n;
    cin >> n;
    cout << "Output: " << fact(n);
    return 0;
}
