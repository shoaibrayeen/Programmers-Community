#include <iostream>
using namespace std;

void leadersInAnArray(int arr[], int n)
{
    int curr_leader = arr[n - 1];
    cout << curr_leader << " ";

    for (int i = n - 2; i >= 0; i--) {
        if (curr_leader < arr[i]) {
            curr_leader = arr[i];
            cout << curr_leader << " ";
        }
    }
}

int main()
{
    int n;
    cout << "Enter the size of an array:" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the elements of an array:" << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    leadersInAnArray(arr, n);
    return 0;
}