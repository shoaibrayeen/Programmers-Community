#include <iostream>
using namespace std;

int power(int b, int p)
{
    if (p == 0)
        return 1;
    else
        return b * power(b, p - 1);
}

int main()
{
    int base, p;
    cout << "Base:";
    cin >> base;
    cout << "Power:";
    cin >> p;
    
    cout << endl;
    if (p == 0 && base == 0)
        cout << "Indeterminant"<<endl;
    else if (p >= 0)
        cout << power(base, p);
    else {
        p = p * -1;
        cout << (float) 1/power(base, p);
    }
}
