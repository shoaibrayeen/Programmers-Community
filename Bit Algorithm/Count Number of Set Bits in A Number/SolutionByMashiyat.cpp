#include <iostream>
using namespace std;

int main()
{
    cin >> n;
    int result = 0;
    while (n > 0) {
        n = (n & (n - 1)); // using Brain Kerningam's Algorithm
        result++;
    }
    cout << result << endl;
    return 0;
}
