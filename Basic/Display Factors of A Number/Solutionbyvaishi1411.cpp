#include <iostream>
using namespace std;
int factor(int);
int main()
{
    int s, fact;
    cout << "Enter the number whose factor is to be determined:";
    cin >> s;
    cout << "Factors are:";
    factor(s);
    return 0;
}
int factor(int s)
{
    for (int i = 1; i <= s; i++)
        if (s % i == 0) {
            cout << "\n"
                 << i;
        }
    return 0;
}
