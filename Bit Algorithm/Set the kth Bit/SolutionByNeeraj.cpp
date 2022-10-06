#include <bits/stdc++.h>
using namespace std;

int bit(int num, int k)
{
    return ((1 << (k - 1)) | num); //shifts the kth bit and then set the k-1 bit in number
}
int main(int argc, char const* argv[])
{
    int number;
    cin >> number; // the number by the user
    int pos;
    cin >> pos; // the postion to set the bit
    cout << bit(number, pos);
    return 0;
}
