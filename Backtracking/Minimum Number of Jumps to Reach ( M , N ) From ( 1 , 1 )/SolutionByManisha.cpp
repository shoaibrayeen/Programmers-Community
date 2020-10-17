#include <iostream>
using namespace std;


int sol = INT_MAX;

bool isSolve( int x, int y, int m, int n) {
    if( m > 0 && n > 0 && x <= m && y <= n) {
        return true;
    }
    return false;
}
void helper( int x,int y, int m, int n, int counter ) {
    if( isSolve(x, y, m, n) == true) {
        if( x == m && y == n) {
            if( sol > counter ) {
                sol = counter;
            }
        }
        helper(x + y, y , m, n , counter+ 1 );
        helper(x, x +  y , m, n , counter+ 1 );
    }
}

int main() {
    int m , n;
    
    cout << "\nEnter M\t:\t";
    cin >> m;
    cout << "\nEnter N\t:\t";
    cin >> n;
    helper( 1 , 1 , m, n , 0);
    if ( sol == INT_MAX) {
        cout << "\nMinimum Number of Steps\t:\t-1\n";
    }
    else {
        cout << "\nMinimum Number of Steps\t:\t" << sol << endl;
    }
    return 0;
}
