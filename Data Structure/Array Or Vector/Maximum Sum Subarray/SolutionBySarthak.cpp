#include<iostream>
#include<climits>
#include<math.h>
using namespace std;

int main() {
    int n, maxsum = INT_MIN, csum;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int j = 0; j < n; j++) {
        csum += a[j];
        if (csum < 0) {
            csum = 0;
        }
        maxsum = max(maxsum, csum);
    }
    cout << maxsum << endl;
}