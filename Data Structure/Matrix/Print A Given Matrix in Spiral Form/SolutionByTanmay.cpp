#include <iostream>
#include <vector>
using namespace std;

void printSpriral(vector<vector<int>>& matrix)
{
    int top = 0, right = matrix[0].size() - 1, bottom = matrix.size() - 1, left = 0;
    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; i++) {
            cout << matrix[top][i] << " ";
        }
        top++;

        for (int i = top; i <= bottom; i++) {
            cout << matrix[i][right] << " ";
        }
        right--;

        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                cout << matrix[bottom][i] << " ";
            }
            bottom--;
        }

        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                cout << matrix[i][left] << " ";
            }
            left++;
        }
    }
    cout << endl;
}

int main()
{
    int R, C, val;
    cin >> R >> C;
    vector<vector<int>> matrix;
    for (int i = 0; i < R; i++) {
        vector<int> v;
        for (int j = 0; j < C; j++) {
            cin >> val;
            v.push_back(val);
        }
        matrix.push_back(v);
    }
    printSpriral(matrix);
    return 0;
}
