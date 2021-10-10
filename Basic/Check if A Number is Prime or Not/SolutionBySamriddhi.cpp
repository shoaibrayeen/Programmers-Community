#include <cmath>
#include <iostream>
using namespace std;

void checkprime(int n)
{
    int i, flag = 0;
    for (i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            flag = 1;
            break;
        }
    }
    if (flag)
        cout << "No";
    else
        cout << "Yes";
}
int main()
{
    int n;
    cin >> n;
    checkprime(n);
    return 0;
}
