/*
     A String is given. You need to check if it's palindrome or not.
*/
#include<iostream>
#include<string>
using namespace std;

bool check_palindrome(string);

int main()
{
    string str;
    cout<<"Enter a string ";
    cin>>str;

    bool check=check_palindrome(str);

    if(check==1)
          cout<<"YES";
    else
          cout<<"NO";

    return 0;
}
bool check_palindrome(string s)
{
    int len,i,j;
    len=s.length();
    for(i=0,j=len-1;i<=j;i++,j--)
    {
        if(s[i]!=s[j])
              break;
    }
    if(i>j)
        return 1;
    else
        return 0;
}
