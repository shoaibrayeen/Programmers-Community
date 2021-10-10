#include <iostream>
using namespace std;

int SecondLargest(int A[], int size)
{
    int temp;

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (A[j] > A[j + 1]) {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
    return A[size - 2];
}

int main()
{
    int size;
    int* A = new int[size];

    cout << "Enter size of array: " << endl;
    cin >> size;

    cout << "Enter elements of array: " << endl;
    for (int i = 0; i < size; i++) {
        cin >> A[i];
    }

    if (size > 1) {
        cout << "Second largest number: " << SecondLargest(A, size) << endl;
    } else {
        cout << "No Second Largest Number" << endl;
    }
    return 0;
}
