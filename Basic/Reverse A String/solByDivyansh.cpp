#include<iostream>
#include<string.h>
using namespace std;

int main(){
int i,j,l;
char line[1000],rev[1000];

cout<<"Input String: "<<endl;
cin>>line;
cout<<"Original string: "<<line<<endl;

for(i=0;line[i]!='\0';i++);
{
l=i-1;
}

for(j=0;j<=i-1;j++)
{
rev[j]=line[l];
l--;
}
cout<<"Reverse string is: "<<rev<<endl;
 
return 0;
}

