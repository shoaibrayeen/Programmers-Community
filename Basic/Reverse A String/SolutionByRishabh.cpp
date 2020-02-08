#include<iostream>
#include <string.h>
using namespace std;

int main()
{

char ch[200],temp;
cin>>ch;

int l=strlen(ch);

//cout<<l;

for(int i=0;i<=l/2;i++)
{
     temp=ch[i];

     ch[i]=ch[l-i];

     ch[l-i]=temp;
}


for(int i=0;i<=l;i++)
	cout<<ch[i];

}


