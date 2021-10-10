#include <iostream>

using namespace std;
void isSame(signed int x, signed int y)
{
    if ((y > 0 && x < 0) || (y < 0 && x > 0))
        cout << "Yes";
    else
        cout << "No.";
}
int main()
{
    signed int a, b;
    cin >> a;
    cin >> b;
    isSame(a, b);
    return 0;
}
