#include <iostream>
using namespace std;

int main()
{
    int n,flag=0;
    cout << "\nEnter Number\t:\t";
    cin >> n;
    if ( n == 0) {
        flag = 1;
    }
    while(n > 0)
    {
        n = n/10;
        flag++;
    }
    cout << "\nNumber of Digits\t:\t" << flag << endl;
    return 0;
}
