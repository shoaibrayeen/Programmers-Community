#include <bits/stdc++.h>
using namespace std;

int productOfDigits(int num)
{
    int product = 1;
    while (num > 0) {
        int digit = num % 10;
        if (digit != 0) {
            product *= digit;
        }
        num /= 10;
    }
    return product;
}

int main()
{
    int num;
    cin >> num;
    cout << productOfDigits(num) << endl;
    return 0;
}
