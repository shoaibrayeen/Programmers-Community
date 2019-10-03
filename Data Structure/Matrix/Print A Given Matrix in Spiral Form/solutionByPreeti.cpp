#include <iostream>
using namespace std;

void printSpiralForm(int r, int c) {
    int mat[r][c];
    cout << "\nEnter Matrix Elements\n";
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cin >> mat[i][j];
        }
    }
    
    cout << "\nSpiral Matrix\t:\t";
    for(int rStart = 0, cStart = 0; rStart < r && cStart < c; ) {
        for(int i = 0; i < c; i++) {
            cout << mat[rStart][i] << "\t";
        }
        rStart++;
        for( int i = rStart; i < r; i++) {
            cout << mat[i][c-1] << "\t";
        }
        c--;
        
        if ( rStart < r) {
            for(int i = c - 1; i >= cStart; i--) {
                cout << mat[r-1][i] << "\t";
            }
            r--;
        }
        if ( cStart < c) {
            for(int i = r - 1; i > rStart; --i) {
                cout << mat[i][cStart] << "\t";
            }
            cStart++;
        }
    }
}

int main() {
    int r, c;
    cout << "\nEnter Number of Rows\t:\t";
    cin >> r;
    cout << "\nEnter Number of Rows\t:\t";
    cin >> c;
    printSpiralForm(r,c);
    cout << endl;
    return 0;
}
