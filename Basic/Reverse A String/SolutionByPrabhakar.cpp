#include <iostream>
#include<string>


using namespace std;

void rev(string str,int j)
{

    for(int i=j-1;i>=0;i--)
    {
        cout<<str[i];
    }
}

int length(string s)
{int n=0;
        for(int i = 0; s[i] != '\0'; ++i)
        {
            n++;
        }

            return n;
}

int main()
{
string str;
int i;

getline(cin,str);
i=length(str);
rev(str,i);//call reverser passing the count and string
return 0;
}
