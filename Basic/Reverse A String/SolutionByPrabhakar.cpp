#include <iostream>
#include <string>

using namespace std;

string rev(string str)
{
    int len = int(str.length()) - 1;
    int i = 0;
    while (i < len) {
        swap(str[i], str[len]);
        i++;
        len--;
    }
    return str;
}

int main()
{
    string str;
    cout << "\nEnter String\t:\t";
    getline(cin, str);
    cout << "\nRevesed String\t:\t" << rev(str) << endl;
    return 0;
}
