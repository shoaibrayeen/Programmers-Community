#include<iostream>
using namespace std;

int main()
{
    int num, product = 1;
    cin >> num;
    while (num > 0) {
        int x = num % 10;
        if (x != 0) {
            product = product * x;
        }
        num = num / 10;
    }
    cout << product;
}
