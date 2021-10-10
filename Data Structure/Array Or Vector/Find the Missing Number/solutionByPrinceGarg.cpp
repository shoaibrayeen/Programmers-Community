#include <iostream>
using namespace std;

int main()
{
    int size;
    cin >> size;
    int array[size];
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }
    int sum = ((size + 1) * (size + 2)) / 2;

    int total = 0;
    for (int i = 0; i < n; i++) {
        total = total + array[i];
    }
    cout << "\nThe missing number\t:\t" << (sum - total);
}
