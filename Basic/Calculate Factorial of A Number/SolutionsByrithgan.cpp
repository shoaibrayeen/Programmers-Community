#include <iostream>

using namespace std;
int fact(int n)
{
    if (n >= 1) {
        return n * fact(n - 1);
    } else {
        return 1;
    }
}
int main()
{
    cout << "enter a positive number ";
    int N;
    cin >> N;
    cout << "Factorial is " << fact(N);
    return 0;
}