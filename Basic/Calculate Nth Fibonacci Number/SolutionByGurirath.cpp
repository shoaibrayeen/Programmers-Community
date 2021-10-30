#include <iostream>
using namespace std;

int fib(int num)
{
    if (num == 1)
        return 0;
    else if (num == 2)
        return 1;
    else {
        return fib(num - 1) + fib(num - 2);
    }
}

int main()
{
    int n;
    cout << "Enter number of fibonacci to be found \n";
    cin >> n;
    cout << "series is " << fib(n);

    return 0;
}
