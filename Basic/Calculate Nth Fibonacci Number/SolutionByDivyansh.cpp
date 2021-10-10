#include <iostream>
using namespace std;

int fib(int N)
{
    if (N == 1) {
        return 0;
    } else if (N == 2) {
        return 1;
    } else {
        return fib(N - 1) + fib(N - 2);
    }
}
int main()
{
    int N;
    cout << "Enter number to find N'th fibonacci number: " << endl;
    cin >> N;

    if (N > 0) {
        cout << fib(N) << endl;
    } else {
        cout << "Enter a positive number!" << endl;
    }
    return 0;
}
