//printing a given matrix in spiral format
#include <iostream>
#include <vector>
using namespace std;
void spiralprint(vector<vector<int>>& arr)
{
    int rs = 0, cs = 0, re = arr.size() - 1, ce = arr[0].size() - 1, count = arr.size() * arr[0].size();
    //count is total number of elements
    while (count > 0) {
        for (int i = rs, j = cs; count > 0 && j <= ce; j++) {
            cout << arr[i][j] << " ";
            count--;
        }
        rs++;
        if (count <= 0) {
            break;
        }
        for (int j = ce, i = rs; count > 0 && i <= re; i++) {
            cout << arr[i][j] << " ";
            count--;
        }
        ce--;
        if (count <= 0) {
            break;
        }

        for (int i = re, j = ce; count > 0 && j >= cs; j--) {
            cout << arr[i][j] << " ";
            count--;
        }
        re--;
        if (count <= 0) {
            break;
        }

        for (int j = cs, i = re; count > 0 && i >= rs; i--) {
            cout << arr[i][j] << " ";
            count--;
        }
        cs++;
        if (count <= 0) {
            break;
        }
    }

    return;
}
void input(vector<vector<int>>& arr)
{
    for (int i = 0; i < arr.size(); i++) {
        cout << "Enter data for row " << i + 1 << ":";
        for (int j = 0; j < arr[0].size(); j++) {
            cin >> arr[i][j];
        }
        cout << endl;
    }
}
int main(int args, char** argv)
{
    int n, m;
    cout << "Enter row size:";
    cin >> n;
    cout << "Enter column size:";
    cin >> m;
    //input size
    vector<vector<int>> arr(n, vector<int>(m, 0));
    cout << "Enter array:" << endl;
    input(arr);
    cout << "Output: ";
    spiralprint(arr);
    cout << endl;
    cout << "Printed in spiral manner";
}
