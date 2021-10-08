// checking if 2 strings are anagrams of each other or not
// anagram- all character appear with same freq. in both strings
// logic: make a count array ofsize 256 and count the occurences of all characters in the first string.
//        now iterate through the 2nd string and reduce the values of count array.
//        now check iff all the values in the count array are 0 or not

#include<bits/stdc++.h>
using namespace std;

bool anagram(string s1,string s2)
{
    if(s1.length()!=s2.length())
    return false;
    int count[256]={0};
    // counting all occurences of characters in s1
    for(int i=0;i<s1.length();i++)
    count[s1[i]]++;
    // iterating through s2
    for(int i=0;i<s2.length();i++)
    count[s2[i]]--;
    // checking count array
    for(int i=0;i<256;i++)
    {
        if(count[i]!=0)
        return false;
    }
    return true;
}
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    cout<<anagram(s1,s2);
    return 0;
}