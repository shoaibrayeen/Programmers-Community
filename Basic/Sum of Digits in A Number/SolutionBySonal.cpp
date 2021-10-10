#include <iostream>
using namespace std;

int main()
{
    int n, temp, i, sum = 0;
    cin >> n;
    temp = n;
    while (temp > 0) {
        i = temp % 10;
        sum = sum + i;
        temp = temp / 10;
    }
    cout << sum;
    // your code goes here
    return 0;
}
