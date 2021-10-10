#include <iostream>
using namespace std;

int func(int a)
{
    int rev = 0;
    while (a != 0) {
        rev = rev * 10 + a % 10;
        a = a / 10;
    }
    return rev;
}
int main(int argc, char** argv)
{
    int a;
    cout << "enter the number";
    cin >> a;
    cout << "\nReverse Number\t:\t" << func(a);
}
