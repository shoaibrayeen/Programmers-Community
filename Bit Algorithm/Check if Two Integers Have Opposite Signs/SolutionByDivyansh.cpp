#include <iostream>
using namespace std;
int chkSign(signed int num1, signed int num2)
{
    if (num1 * num2 < 0) {
        return 1;
    } else {
        return 0;
    }
}
int main()
{
    signed int num1, num2;
    cout << "Enter num1 & num2" << endl;
    cin >> num1 >> num2;
    int result = chkSign(num1, num2);
    if (result == 1) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
