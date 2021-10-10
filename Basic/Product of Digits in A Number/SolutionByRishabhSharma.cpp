#include <iostream>
using namespace std;

int mDigits(int n)
{
    if (n == 0)
        return 0;
    int ans = 1;

    while (n > 0) {
        int rem = n % 10;
        if (rem == 0)
            rem++;
        ans *= rem;
        n = n / 10;
    }

    return ans;
}

int main()
{

    int n;
    cout << "Enter the Number " << endl;
    cin >> n;

    int ans = mDigits(n);

    cout << ans << endl;
}
