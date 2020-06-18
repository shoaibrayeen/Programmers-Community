#include <iostream>
#include <string>
using namespace std;

int main()
{
    string S;
    cout << "Enter String:" << endl;
    cin >> S;
    int len = 0;
    for(int i = 0; S[i] != '\0'; i++)
        len++;

    cout << len;
    return 0; 

}