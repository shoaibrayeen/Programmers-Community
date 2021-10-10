#include <iostream> // Heder Files
using namespace std;

void check(int n)
{
    if (n & 1 == 0)
        cout << "EVEN";
    else
        cout << "ODD";
}

int main() // Driver Code
{
    int n;
    cout << "\n Enter value of n:" << endl;
    cin >> n;
    check(n);
    return 0;
}
