#include <iostream>
#include <string>

using namespace std;

int main() {
    int i=0,count=0,prev=0,j=0;
    string str1,str2;

    cout<<"Enter string1 :";
    cin>>str1;
    cout<<"\nEnter string2 :";
    cin>>str2;

    cout<<"\nlongest common subsequence is: ";
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
    cout<<"\n\nLength of longest common subsequence is: "<<count;
    return 0;
}


