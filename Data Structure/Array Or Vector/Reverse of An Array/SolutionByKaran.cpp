#include <iostream>
using namespace std;
void reverse(int a[], int size)
{
    //Allocation of the memory
    int* b = new int[size];
    int i = size - 1, j = 0;
    while (j < size) {
        b[j] = a[i];
        j++;
        i--;
    }
    cout << "The resverse array is: ";
    for (int k = 0; k < size; k++) {
        cout << b[k] << " ";
    }
    //Deallocation of The memory
    delete[] b;
    cout << endl;
}
int main()
{
    int s;
    cout << "Enter the size of the array: ";
    cin >> s;
    cout << endl;
    //Allocation of the memory
    int* g = new int[s];
    cout << "Enter the array: ";
    for (int i = 0; i < s; i++) {
        cin >> g[i];
    }
    cout << endl;
    reverse(g, s);
    //Deallocation of The memory
    delete[] g;
    return 0;
}
