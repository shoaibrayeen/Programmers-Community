#include <iostream>
using namespace std;

int main()
{

    int arr[1000], i, n, ele, flag = 0;

    cout << "Enter size of array : " << endl;
    cin >> n;

    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter element to search : " << endl;
    cin >> ele;

    for (i = 0; i < n; i++) {
        if (arr[i] == ele) {
            flag = 1;
            break;
        }
    }

    if (flag == 1) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
