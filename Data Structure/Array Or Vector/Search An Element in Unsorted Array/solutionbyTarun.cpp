#include <iostream>
using namespace std;

int main()
{
    int element, size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    cin >> element;

    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}
