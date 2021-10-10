#include <algorithm>
#include <iostream>
using namespace std;

void reverseInGroup(int arr[], int n, int k)
{
    for (int i = 0; i < n; i += k) {
        int left = i;
        int right = min(i + k - 1, n - 1);
        while (left < right)
            swap(arr[left++], arr[right--]);
    }
}

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n;
    cout << "Enter the size of an array" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array" << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int k;
    cout << "Enter the value of k" << endl;
    cin >> k;
    reverseInGroup(arr, n, k);
    display(arr, n);
    return 0;
}