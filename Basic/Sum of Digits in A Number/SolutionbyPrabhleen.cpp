#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0, m;
    cin >> n;
    while (n > 0) {
        m = n % 10;
        sum = sum + m;
        n = n / 10;
    }
    cout << "Output= " << sum;
    return 0;
}
