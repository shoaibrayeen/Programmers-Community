#include <bits/stdc++.h>

using namespace std;

int numberOfSetBits(int x){
    int ans = 0;    
    while(x){   // check until the value of x is not 0 (or in other words all bits are 0)
        if(x & 1){
            ans++;  // if Least significant bit is set, increase the number of set bits
        }
        x = x >> 1; // pop the least significant bit from the number
    }
    return ans;
}

int main(){
    int x;  // the number in which we have to count the number of set bits
    cout << "Enter the number: ";
    cin >> x;
    
    cout << "The number of set bits in " << x << " is " << numberOfSetBits(x) << "\n";

    return 0;
}
