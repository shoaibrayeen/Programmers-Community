#include <iostream>
using namespace std;

int Count(int n)
{
    int countt = 0;
    while (n > 0) {
        n = n / 10;
        countt++;
    }

    return countt;
}
int main()
{
    int n;
    cout << "Enter Number" << endl;
    cin >> n;

    cout << Count(n) << endl;
}
