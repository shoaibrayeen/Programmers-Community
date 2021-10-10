#include <iostream>
using namespace std;
int find_gcd(int, int);
int main()
{
    int s, v, res;
    cout << "Enter the two numbers on which GCD operation is to be applied: ";
    cin >> s >> v;
    res = find_gcd(s, v);
    cout << "GCD of " << s << " and " << v << " is " << res;
    return 0;
}
int find_gcd(int s, int v)
{
    if (v == 0)
        return s;
    return find_gcd(v, s % v);
}
