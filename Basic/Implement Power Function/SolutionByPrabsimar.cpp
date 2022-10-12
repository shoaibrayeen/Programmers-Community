#include <iostream>
using namespace std;

int pow(int x, unsigned int N)
{
    int t = 0;
    if (N == 0)
        return 1;
    if (N == 1)
        return x;

    t = pow(x, N / 2);
    if (N % 2 == 0)
        return t * t;
    else
        return x * t * t;
}

int main()
{
    int x;
    unsigned int N;
    cout << "Enter base and power:" << endl;
    cin >> x >> N;
    cout << "Power: " << pow(x, N);
}
