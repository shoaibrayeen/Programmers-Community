#include <iostream>
#include <vector>
using namespace std;

int getFirstMissing(vector<int> array, int start, int end)
{
    if (start > end) {
        return end + 1;
    }
    if (start != array[start]) {
        return start;
    }
    int mid = (start + end) / 2;
    if (array[mid] == mid) {
        return getFirstMissing(array, mid + 1, end);
    }
    return getFirstMissing(array, start, mid);
}

int main()
{
    int n;
    cout << "\nEnter Size of Array\t:\t";
    cin >> n;
    vector<int> array(n);
    cout << "\nEnter Array Element\n";
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    cout << "\nSmallest Missing Number\t:\t" << getFirstMissing(array, 0, n - 1) << "\n";
    return 0;
}
