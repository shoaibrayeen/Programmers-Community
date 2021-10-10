//check for palindrome
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char shi[50];
    char vai[50];
    int v = 0, flag;
    cout << "Enter the string :";
    cin >> shi;
    v = strlen(shi) - 1;
    for (int i = v, j = 0; i >= 0; i--, j++)
        vai[j] = shi[i];
    if (strcmp(shi, vai))
        flag = 1;
    if (flag == 1)
        cout << shi << " is not a palindrome";
    else
        cout << shi << " is a palindrome";
    return 0;
}
