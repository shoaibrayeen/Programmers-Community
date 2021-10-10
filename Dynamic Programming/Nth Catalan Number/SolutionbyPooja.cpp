/*
    Catalan Number
    c0 = 1, c1 = 1, c(n) = sum[c(n-i)*ci] where i = 0 to n - 1
    input : n = 3
    output 5

    explaination c(3) = c2c0 + c1c1 + c0c2
    and c0 = c1 = 1
    c2 = c1c0 + c0c1
        = 1*1 + 1*1 = 2
    c3 =  2*1 + 1*1 + 1*2 = 5

   using bottom up dp
*/
#include <iostream>
using namespace std;

unsigned long int Catalan(int n)
{
    unsigned long int t[n + 1];

    t[0] = t[1] = 1;

    for (int i = 2; i <= n; i++) {
        t[i] = 0;
        for (int j = 0; j < i; j++)
            t[i] += t[j] * t[j - i - 1];
    }

    return t[n];
}

int main()
{
    int n;
    cout << "N ? ";
    cin >> n;

    cout << Catalan(n);
}
