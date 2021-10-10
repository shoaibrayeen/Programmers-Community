#include <iostream>
using namespace std;
int main()
{
    int n; // varialble for size of an array
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int j = n - 1;
    for (int i = 0; i < n / 2; i++) {
        swap(a[i], a[j]);
        j--;
    }
    cout << "\nReversed Array\t:\t";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}
