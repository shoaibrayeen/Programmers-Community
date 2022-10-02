#include<iostream>
using namespace std;

int main() {
    int size, xor = 0, count = 0, num1 = 0, num2 = 0;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
        xor = xor ^ arr[i];
    }
    while ((xor & 1) != 1) {
        xor >> 1;
        count++;
    }
    for (int j = 0; j < size; j++) {
        if (((arr[j] >> count) & 1) != 0) {
            num1 = num1 ^ arr[j];
        }
        else {
            num2 = num2 ^ arr[j];
        }
    }
    cout << num1 << ", " << num2;
    return 0;
}