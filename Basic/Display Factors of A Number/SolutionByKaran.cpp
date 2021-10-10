#include <iostream>
using namespace std;
void display_factors(long n)
{

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cout << i;
            if (i != n) {
                cout << " , ";
            }
        }
    }
    cout << "\n";
}
int main()
{
    long a;
    cout << "Enter the number: \n";
    cin >> a;
    cout << "The factors are: ";
    display_factors(a);
    return 0;
}
