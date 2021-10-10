#include <iostream>

using namespace std;
int main(int argc, char const* argv[])
{
    int num;
    cout << "Enter a number.\n";
    cin >> num;
    if ((num & 1) == 0) {
        cout << "Number is Even";
    } else {
        cout << "Number is Odd";
    }
    return 0;
}
