#include <iostream>
#include <vector>
using namespace std;
void input(vector<int>& arr)
{

    cout << "enter the elements in the array\n";

    for (int i = 0; i < arr.size(); i++) {
        cin >> arr[i];
    }
}
void binarysort(vector<int>& arr)
{
    int zeroes = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == 0) {
            zeroes++;
        }
    }

    for (int i = 0; i < zeroes; i++) {
        arr[i] = 0;
    }
    for (int j = zeroes; j < arr.size(); j++) {
        arr[j] = 1;
    }
}

void display(vector<int>& arr)
{
    cout << "the array after sorting is\n";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int size;
    cout << "enter the size of the  array\n";

    cin >> size;
    vector<int> arr(size, 0);
    input(arr);
    binarysort(arr);
    display(arr);

    return 0;
}
