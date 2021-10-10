#include <iostream>
using namespace std;

void reverse(int v[], int n);

int main()
{
    int n, i;
    cout << "\nEnter the size of the array: ";
    cin >> n;
    int* shi = new int[n];
    cout << "\nEnter the elements of an array: ";
    for (i = 0; i < n; i++) {
        cin >> shi[i];
    }
    reverse(shi, n);
    cout << "\nReverse Array\t:\t";
    for (i = 0; i < n; i++) {
        cout << shi[i] << "\t";
    }
    cout << endl;
    return 0;
}

void reverse(int v[], int n)
{
    int i = 0, j = n - 1, temp;
    while (i < j) {
        temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
}
