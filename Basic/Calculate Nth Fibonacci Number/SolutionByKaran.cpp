#include <iostream>
using namespace std;
void fibo(int n)
{
    int a = 0, b = 1, c = 0;
    if (n == 0) {
        cout << a;
    } else if (n == 1) {
        cout << b;
    } else {
        for (int i = 2; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        cout << c;
    }
}
int main()
{
    int a;
    cout << "Enter the value of n \n";
    cin >> a;
    fibo(a);
    return 0;
}
