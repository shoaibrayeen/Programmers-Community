#include<iostream>
#include <cstring>
#include<stdio.h>
using namespace std;

int Palindrome(char str[])
{
    int i,j,l;
    l=strlen(str) ;

    for(i=0,j=l-1;i<l,j>=0;i++,j--)
    {
        if(str[i]==str[j])
        {
            return 1;
        }

        else{
            return 0;
        }
    }

}

int main()
{
    int size;
    cout<<"Enter the length of string : ";
    cin>>size;
    char *s=new char[size];
     cout<<"Enter string : ";
     cin>>s;
    cout<<(Palindrome(s) ? "It is a Palindrome" : "No, it is not a palindrome");

return 0;
}
