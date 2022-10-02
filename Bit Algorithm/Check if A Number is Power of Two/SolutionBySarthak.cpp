#include<iostream>
using namespace std;

bool powerof2(int a) {
    return (a & (a-1)) > 0 ? false : true;
}

int main() {
    int a;
    cin >> a;
    if (powerof2(a)) {
        cout << "yes";
    }
    else {
        cout << "no";
    }
    return 0;
}