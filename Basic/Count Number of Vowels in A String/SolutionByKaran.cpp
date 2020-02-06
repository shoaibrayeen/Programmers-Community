#include <iostream>
#include <cstring>
#include <string>
#include "stdio.h"
using namespace std;
int count_vowels(char* str)
{
      int f=0;
      for(int i=0; i<=strlen(str)-1;i++)
      {
          if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || 
          str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || 
          str[i]=='O' || str[i]=='U' )
          {
                f++;	
          }
      }
      return f;
}
int main() 
{	
      char* str_a = new char();
      cout<<"Enter the string: \n";
      std::cin>>str_a;
      cout<<"Number of vowels in string: "<<count_vowels(str_a);
      return 0;
}
