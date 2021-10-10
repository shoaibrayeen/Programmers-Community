#include <iostream>

using namespace std;
void product(int num)
{
    int res = 1, remainder;
    if (num > 0) {
        while (num != 0) {
            remainder = num % 10;
            if (remainder == 0) {
                res = res * 1;
            } else {
                res = res * remainder;
            }
            num = num / 10;
        }
    }
    cout << res;
}
int main()
{
    int number;
    cin >> number;
    product(number);
    return 0;
}
