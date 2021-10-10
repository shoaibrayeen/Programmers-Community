#include <iostream>
using namespace std;

void nonRepeating(int arr[], int n)
{
    int _xor = 0, _n1 = 0, _n2 = 0;

    for (int i = 0; i < n; i++) {
        _xor ^= arr[i];
    }

    int _setBit = _xor & ~(_xor - 1);

    for (int i = 0; i < n; i++) {
        if (arr[i] & _setBit) {
            _n1 ^= arr[i];
        } else {
            _n2 ^= arr[i];
        }
    }
    cout << _n1 << " " << _n2 << endl;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    nonRepeating(arr, n);
    return 0;
}
