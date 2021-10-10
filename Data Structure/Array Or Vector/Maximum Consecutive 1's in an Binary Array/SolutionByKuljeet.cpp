#include <algorithm>
#include <iostream>
using namespace std;

int getMaxConsecutiveOnes(bool arr[], int n)
{
    int res = 0;
    int current_count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            current_count = 0;
        } else {
            current_count++;
            res = max(res, current_count);
        }
    }

    return res;
}

int main()
{
    int n;
    cout << "Enter the size of an array:" << endl;
    cin >> n;
    bool arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Maximum no. of consecutive 1's in an array is: " << getMaxConsecutiveOnes(arr, n);
    return 0;
}