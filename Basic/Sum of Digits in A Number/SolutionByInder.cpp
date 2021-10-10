#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cin >> n;
    while (n > 0) {
        int N = n % 10;
        sum = sum + N;
        n = n / 10;
    }
    cout << sum;
}
