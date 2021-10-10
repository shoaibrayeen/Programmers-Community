/* Program to calculate product of elements in an array*/
#include <iostream>
using namespace std;

void product(int a[], int n); //Declaring Prototype of the function product

int main()
{
    int n;
    cout << "Enter no. of elements:";
    cin >> n;
    int* a = new int[n];
    cout << "Enter element in array:";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    product(a, n);
    return 0;
}

void product(int a[], int n) //Defining function product
{
    long int product = 1;
    for (int i = 0; i < n; i++) {
        product *= a[i];
    }
    cout << "Product of elements are:" << product;
}
