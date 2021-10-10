#include <iostream>
using namespace std;

int ThreeLargestNum(int A[], int size)
{
    int temp;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (A[i] < A[j]) {
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }

    cout << "First three largest number: " << endl;
    for (int i = size - 1; i > size - 4; i--) {
        cout << A[i] << endl;
    }
    return 0;
}

int main()
{
    int size, result;

    cout << "Enter number of elements: " << endl;
    cin >> size;

    int A[size];

    cout << "Enter elements of array: " << endl;
    for (int i = 0; i < size; i++) {
        cin >> A[i];
    }

    ThreeLargestNum(A, size);
    return 0;
}
