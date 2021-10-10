#include <iostream>
using namespace std;

int sum(int arr[], int n)
{
    int product = 1;
    for (int i = 0; i < n; i++) {
        product = product * arr[i];
    }

    return product;
}

int main()
{
    int n;
    cout << "Enter Size of array:" << endl;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Product of elements in an array is: " << sum(arr, n);

    return 0;
}