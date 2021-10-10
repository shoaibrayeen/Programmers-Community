#include <iostream>
using namespace std;

int power(int x, unsigned int N)
{
    int temp = 0;
    if (N == 0)
        return 1;

    if (N == 1)
        return x;

    temp = power(x, N / 2);
    if (N % 2 == 0)
        return temp * temp;
    else
        return x * temp * temp;
}

int main()
{
    int x;
    unsigned int N;
    cout << "Enter valuo of x and N:" << endl;
    cin >> x >> N;
    cout << "Power is: " << power(x, N);

    return 0;
}