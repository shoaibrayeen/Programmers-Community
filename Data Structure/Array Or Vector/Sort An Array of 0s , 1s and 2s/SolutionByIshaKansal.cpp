//sort 0 1 2
#include <iostream>
#include <vector>
using namespace std;
void sort_012(vector<int>& arr)
{
    int pt1 = 0, itr = 0, pt2 = arr.size() - 1;
    //pt1 makes sure all elements before it are 0
    //pt2 makes sure all elements after it are 2
    //itr traverses entire array
    while (itr <= pt2) {
        if (arr[itr] == 0) {
            swap(arr[pt1], arr[itr]);
            pt1++;
            itr++;
        } else if (arr[itr] == 2) {
            swap(arr[pt2], arr[itr]);
            pt2--;
        } else
            itr++;
    }
}

void input(vector<int>& arr)
{
    for (int i = 0; i < arr.size(); i++) {
        cin >> arr[i];
    }
}
void print(vector<int>& arr)
{
    for (int i : arr) {
        cout << i << " ";
    }
}
int main(int args, char** argv)
{
    int n;
    cout << "Enter size:";
    cin >> n;
    //input size
    vector<int> arr(n, 0);
    cout << "Enter array:";
    input(arr);
    cout << "Output: ";
    sort_012(arr);
    print(arr);
}
