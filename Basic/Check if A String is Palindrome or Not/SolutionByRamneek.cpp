#include<iostream>
#include <cstring>
#include<stdio.h>
using namespace std;

bool Palindrome(string str)
{
    int len = int(str.length());
    for( int i = 0; i < len/2; i++ ) {
        if( str[i] != str[len - i - 1] ) {
            return false;
        }
    }
    return true;
}

int main()
{
    string s;
     cout<<"Enter string : ";
     cin>>s;
    cout<<(Palindrome(s) ? "It is a Palindrome" : "No, it is not a palindrome");

return 0;
}

