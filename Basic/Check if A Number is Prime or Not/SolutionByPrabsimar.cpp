//PRIME OR NOT

#include <cmath>
#include <iostream>
using namespace std;
int main(int argc, char const* argv[])
{
    int n;
    cout << "Enter a number: "<<endl;
    cin >> n;
    if (n <= 0) {
        cout << "Kindly Enter Natural Numbers"<<endl;
    } else if (n == 1) {
        cout << "1 is neither Prime nor Composite"<<endl;
    } else {
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                cout << n << " is not a prime Number";
                exit(0);
            }
        }
        cout << n << " is a prime Number"<<endl;
    }
    return 0;
}
