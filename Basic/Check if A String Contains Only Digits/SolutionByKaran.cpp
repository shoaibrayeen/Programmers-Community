#include "stdio.h"
#include <cstring>
#include <iostream>
#include <string>
using namespace std;
void only_digits(char* str)
{
    int f = 0;
    for (int i = 0; i <= strlen(str) - 1; i++) {
        if (str[i] <= 48 || str[i] >= 57) {
            f++;
        }
    }
    if (f == 0) {
        cout << "Yes";
    } else {
        cout << "No";
    }
}
int main()
{
    char* str_a = new char();
    cout << "Enter the string: \n";
    std::cin >> str_a;
    only_digits(str_a);
    return 0;
}
