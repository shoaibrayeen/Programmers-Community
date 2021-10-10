#include <iostream>
using namespace std;

string findelement()
{
    int size;
    cout << "enter the size of array";
    cin >> size;
    int A[size];

    for (int i = 0; i < size; i++) {
        cout << "enter elemnts in a sorted way!";
        cin >> A[i];
    }
    int element;
    cout << "enter the elemnt you want to found";
    cin >> element;
    int count = 0;

    for (int i = 0; i < size; i++) {
        if (A[i] == element)

        {
            count = 1;
        }
    }
    if (count == 1) {
        return "element found";
    } else
        return "elemnet not found";
}

int main()
{
    cout << findelement();
}
