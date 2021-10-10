#include <iostream>
using namespace std;

int main()
{
    int size, no;
    cin >> size;
    int* a = new int[size];
    for (int i = 0; i < size; i++) {
        cin >> a[i];
    }
    cin >> no;
    for (int i = 0; i < size; i++) {
        if (a[i] == no) {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";

    return 0;
}
