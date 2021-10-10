#include <iostream>
using namespace std;

int findNonRepeatingElement(int a[], int n)
{
    int res = 0;
    for (int i = 0; i < n; i++) {
        res ^= a[i];
    }
    return res;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << findNonRepeatingElement(a, n) << endl;
    return 0;
}
