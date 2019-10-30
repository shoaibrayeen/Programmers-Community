//finding no.  of vowel in string
#include <iostream>
#include <string>
using namespace std;

int main() {
    int i=0,count=0;
    string s;

    cout<<"Enter string: ";
    cin>>s;
    for(;i<s.length();i++)
    {
       if(s[i]=='a'||s[i]=='e'|| s[i]=='i'|| s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
               count++;
    }
    cout<<"\nNo. of vowel in input sting is : "<<count;


    return 0;
}
