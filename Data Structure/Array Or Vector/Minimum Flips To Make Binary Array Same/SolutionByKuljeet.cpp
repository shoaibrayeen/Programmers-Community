#include <iostream>
using namespace std;

void printGroups(bool arr[], int n)
{
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[i - 1]) {
            if (arr[i] != arr[0])
                cout << "From " << i << " to ";

            else
                cout << (i - 1) << endl;
        }
    }

    if (arr[n - 1] != arr[0])
        cout << (n - 1) << endl;
}

int main()
{
    int n;
    cout << "Enter the size of an array: " << endl;
    cin >> n;
    bool arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    printGroups(arr, n);
    return 0;
}