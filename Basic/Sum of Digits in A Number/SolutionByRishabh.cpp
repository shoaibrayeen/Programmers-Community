#include <iostream>
using namespace std;

int sumOfDigits(int num)
{
    int total = 0;
    while (num > 0) {
        int i = num % 10;
        total += i;
        num = num / 10;
    }
    return total;
}
int main()
{
    int n;
    cin >> n;
    cout << sumOfDigits(n);
}
