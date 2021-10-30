#include <iostream>
using namespace std;

int fact(int num)
{
    if (num >= 1)
        return num * fact(num - 1);
    else
        return 1;
}

int main()
{
    int num;
    cout << "enter number";
    cin >> num;
    cout << "fact of " << num << "\t:\t" << fact(num) << "\num";
    return 0;
}
