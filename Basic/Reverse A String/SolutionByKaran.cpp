#include <iostream>
#include <cstring>
#include <string>
#include "stdio.h"
using namespace std;
void rev(char* str)
{
    int i=0,j=strlen(str)-1;
    char rev_str[j+1];
    while(j>=0 && i<=strlen(str)-1)
    {
          rev_str[i]=str[j];
          j--;
          i++;
    }
    rev_str[i]='\0';
    cout<<"The reversed string is: "<<rev_str;
}
int main() 
{	
    int a;
    cout<<"Enter the size of the string: \n";
    cin>>a;
    char str_a[a];
    cout<<"Enter the string: \n";
    std::cin>>str_a;
    rev(str_a);
    return 0;
}
