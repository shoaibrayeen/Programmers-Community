/*
    A Character is given to you and You need to Whether it's is Vowel or Consonant
*/
#include<iostream>
using namespace std;

bool check_vowel(char);

int main()
{
    char ch;
    bool check;
    cout<<"Enter a character ";
    cin>>ch;

    check=check_vowel(ch);
    if(check==1)
          cout<<ch<<" is vowel";
    else
          cout<<ch<<" is consonant";
}

bool check_vowel(char c)
{
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
          return 1;
    else
          return 0;
}
