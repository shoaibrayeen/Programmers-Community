
#include <iostream>
using namespace std;

int main()
{
    int r, c;
    cin >> r >> c;
    int a[r][c];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> a[i][j];
        }
    }
    int rs, re, cs, ce, i, j = 0, k = 0;
    rs = 0;
    re = r - 1;
    cs = 0;
    ce = c - 1;
    k = r * c;
    while (j < k) {
        for (i = cs; i <= ce; i++) {
            cout << a[rs][i] << " ";
            j++;
        }
        rs++;
        for (i = rs; i <= re; i++) {
            cout << a[i][ce] << " ";
            j++;
        }
        ce--;
        for (i = ce; i >= cs; i--) {
            cout << a[re][i] << " ";
            j++;
        }
        re--;
        for (i = re; i >= rs; i--) {
            cout << a[i][cs] << " ";
            j++;
        }
        cs++;
    }
}
