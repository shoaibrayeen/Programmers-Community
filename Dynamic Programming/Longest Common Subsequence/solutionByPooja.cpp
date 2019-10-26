/*
   length of longest  common subsequence
*/

#include <iostream>
#include <string>
using namespace std;

int longest_subsequence(string,string);

int main() {
    string str1,str2;

    cout<<"Enter string1 :";
    cin>>str1;

    cout<<"\nEnter string2 :";
    cin>>str2;


    cout<<"\n\nLength of longest common subsequence is: "<<longest_subsequence(str1,str2);;
    return 0;
}

int longest_subsequence(string str1,string str2)
{   int i=0,count=0,prev=0,j=0;

    cout<<"\nlongest common subsequence string  is: ";
    while(str2[j]!='\0')
    {

        if(i==prev)
            prev=i;
        else
            i=prev+1;
        while(str1[i]!='\0')
        {
            if(str2[j]==str1[i])
            {
                cout<<str2[j];
                count++;
                break;
            }
            i++;
        }
        j++;
    }
    return count;
}
