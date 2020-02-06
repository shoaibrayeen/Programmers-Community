#include <iostream>
#include <vector>
using namespace std;


int  getMissingNo (vector<int> a) {
    unsigned long n = a.size();
    int first = a[0];
    for (int i = 1; i< n; i++) {
        first ^= a[i];
    }
    int second = 1;
    for (int i = 2; i <= n+1; i++) {
        second ^= i;
    }
    return (first^second);
}

int main() {
    int n;
    cout << "\nEnter Size\t:\t";
    cin >> n;
    vector<int> a(n);
    cout << "\nEnter Elements\n";
    for ( int i = 0; i < n; i++ ) {
        cin >> a[i];
    }
    cout << "\nMissing Number\t:\t" << getMissingNo(a);
    a.clear();
    cout <<  endl;
    return 0;
}
