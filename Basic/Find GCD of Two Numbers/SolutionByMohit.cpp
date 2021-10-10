#include <iostream>
using namespace std;
void func(int a, int b)
{
    int r;
    while (b % a != 0) {
        r = b % a;
        b = a;
        a = r;
    }
    cout << "gcd-" << r << endl;
}
int main(int agrc, char** argv)
{
    int a, b;
    cout << "enter the numbers";
    cin >> a >> b;
    func(a, b);
}
