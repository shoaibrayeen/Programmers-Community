#include <bits/stdc++.h>

using namespace std;

int setKthPositionAndReturnNumber(int x, int k){
    x = x | (1 << k);   // OR x (in binary notation) with (1000..(k-1) zeros...000)
    return x;
}

int main(){
    int x, k;
    cout << "Enter number to alter: ";
    cin >> x;
    cout << "Enter position to set: ";
    cin >> k;

    cout << "The value of " << x << " after setting bit at position " << k << " is " << setKthPositionAndReturnNumber(x, k) << "\n";

    return 0;
}
