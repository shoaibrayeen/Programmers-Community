#include <iostream>
using namespace std;
int main()
{
    int x, size;
    cin >> size;
    cin >> x;
    int arr[size];
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < size; i++) {
        if (arr[i] == x) {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}
