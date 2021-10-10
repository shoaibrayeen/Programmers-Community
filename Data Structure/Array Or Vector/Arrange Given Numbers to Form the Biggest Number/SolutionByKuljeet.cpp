#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int compare(string X, string Y)
{
    string XY = X.append(Y);
    string YX = Y.append(X);
    if (XY > YX)
        return 1;

    else
        return 0;
}

void display(string arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i];
}

int main()
{
    int n;
    cout << "Enter the size of an array:" << endl;
    cin >> n;
    string arr[100];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n, compare);
    display(arr, n);
    return 0;
}
