#include <iostream>
using namespace std;

void check(int n)
{
    if(n%2 == 0)
       cout << "EVEN";
    else
       cout << "ODD";
}

int main()
{
    int n;
    cout <<"\n Enter value of n:" << endl;
    cin >> n;
    check(n);
    return 0;
}