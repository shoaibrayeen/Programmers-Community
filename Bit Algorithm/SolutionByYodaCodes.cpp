#include <bits/stdc++.h>

using namespace std;

bool checkIfPowerOf2(int x){
    if(x <= 0){
        // a negative number or 0 can never be a power of 2
        return false;
    }

    // check until we find the first set bit in x
    while(x & 1 == 0){
        x = x >> 1;
    }

    // if the rest of the number in x is 0, then x is indeed a power of 2
    if(x == 0){
        return true;
    }

    return false;
}

int main(){
    int x;  // the number which we have to check if it is a power of 2
    cout << "Enter the number: ";
    cin >> x;
    
    if(checkIfPowerOf2(x)){
        cout << x << " is a power of 2\n";
    }else{
        cout << x << " is not a power of 2\n";
    }

    return 0;
}
