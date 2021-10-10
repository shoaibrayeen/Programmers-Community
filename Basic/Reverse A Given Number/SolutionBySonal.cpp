#include <bits/stdc++.h>
using namespace std;

int reverseNo(int num)
{
    int newNo = 0;
    while (num != 0) {
        newNo *= 10;
        newNo += (num % 10);
        num /= 10;
    }
    return newNo;
}

int main()
{
    int num;
    cin >> num;
    cout << reverseNo(num) << endl;
    return 0;
}
