/*
  Program Description - This program return whether a number is a power of 2 or not.
  Time Complexity: O(number of bits)
  Space Complexity: O(1)
  Solution Description: 
   using STL builtin function 
   if n is <=10^9 use this: __builtin_popcount(int n) : this function returns number of set bits in binary representation of n  .
   if n is >10^9 use long long version __builtin_popcountll(long long n)

 */

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int num_of_set_bits = __builtin_popcount(n); //returns the set bits in binary representation of n.
    if (num_of_set_bits == 1) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}
/* LOGIC : Every power of 2 has only one set bit 
 e.g 4 = 100(in binary)
     8 = 1000
  1024 = 10000000000 
*/
