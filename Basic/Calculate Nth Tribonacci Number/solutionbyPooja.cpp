/*
    A positive number N is given to you and You need to calculate Nth Number in Tribonacci Series.
    using recursion
*/
#include <iostream>
using namespace std;

int trib(int n)
{
    if (n == 1 || n == 2)
        return 0;
    else if (n == 3)
        return 1;
    else
        return trib(n - 1) + trib(n - 2) + trib(n - 3);
}
int main()
{
    int n;
    cout << "\nWhich term of tibonacci series  you want to print ? ";
    cin >> n;

    cout << trib(n);
}
