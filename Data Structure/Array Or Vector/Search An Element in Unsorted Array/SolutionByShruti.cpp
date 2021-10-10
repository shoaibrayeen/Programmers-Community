#include <iostream>
using namespace std;

int main()
{
    int size, no, count = 0;
    cout << "\nEnter Number to be Searched\t:\t";
    cin >> no;
    cout << "\nEnter Array Size\t:\t";
    cin >> size;
    cout << "\nEnter Array Elements\n";
    int* a = new int[size];
    for (int i = 0; i < size; i++) {
        cin >> a[i];
        if (a[i] == no)
            count++;
    }
    if (count != 0)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
