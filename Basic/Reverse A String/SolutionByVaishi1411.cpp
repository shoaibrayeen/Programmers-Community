//using algorithm headerfile and calling a predefined function reverse
#include <algorithm>
#include <iostream>
#include <string.h>
using namespace std;

void rev_str(string shi)
{
    reverse(shi.begin(), shi.end());
}

int main()
{
    string shi;
    cout << "Enter the String to be Reversed: ";
    cin >> shi;
    rev_str(shi);
    cout << "\nReverse of string in input is: " << shi;
    return 0;
}
