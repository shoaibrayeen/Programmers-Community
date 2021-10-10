#include <iostream>
using namespace std;

int minElement(int a, int b)
{
    return (a > b) ? b : a;
}

int main()
{
    int size, min;

    cout << "Enter size of array: " << endl;
    cin >> size;
    int* A = new int[size];
    cout << "Enter elements of array: " << endl;
    for (int i = 0; i < size; i++) {
        cin >> A[i];
    }

    min = A[0];

    for (int i = 0; i < size; i++) {
        min = minElement(min, A[i]);
    }

    cout << "Minimum element in array: " << min << endl;

    return 0;
}
