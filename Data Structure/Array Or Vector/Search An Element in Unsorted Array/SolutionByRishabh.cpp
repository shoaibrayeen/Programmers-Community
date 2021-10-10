#include <iostream>
using namespace std;

bool linearSearch(int* a, int n, int val)
{
    for (int i = 0; i < n; i++) {
        if (a[i] == val)
            return true;
    }
    return false;
}
int main()
{
    int n;
    cin >> n; //size of array
    int* a = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int val;
    cin >> val; //value to be searched

    int l = linearSearch(a, n, val);

    if (l) //true
        cout << "Yes";
    else
        cout << "No";
}
