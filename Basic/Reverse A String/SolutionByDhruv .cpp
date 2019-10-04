#include<iostream.h>
#include<conio.h>
#include<string.h>              //To use string functions
void main()
{
 char f[5];
 char c="India";
 f=reverse (c);
 for(int i=0;i<strlen(c);i++)
  {
    puts(f[i]);                //To display the reversed string
     }
  getch();
}

char reverse(char &c)          //Function to reverse the string
{
 char d[10];
 for(int i=string.length(c)-1;i>=0;i--)
 {
   gets(d[i]);                 //Take input of reversed string
  }
  return d;
}
