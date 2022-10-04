#include<iostream>
using namespace std;

int main() {
    int a, setbits = 0;
    cin >> a;
    while (a != 0) {
        if ((a & 1) != 0) {
            setbits++;
        }
        a = a >> 1;
    }
    cout << setbits;
    return 0;    
}