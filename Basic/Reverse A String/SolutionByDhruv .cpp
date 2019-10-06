#include<iostream.h>
#include<conio.h>
#include<string.h>              //To use string functions
void main()
{
 int letters;
 cout<<"Enter letters in word";
 cin>>letters;
 char word[letters], f;
 cout<<"Enter word of letters"<<letters;
 cin>>word [letters];
 f=reverse (c, letters);
 for(int i=0;i<letters;i++)
  {
    puts(f[i]);                //To display the reversed string
     }
  getch();
}

char reverse(char &c, int letters)          //Function to reverse the string
{
 char reversed[letters];
 for(int i=letters-1;i>=0;i--)
 {
   gets(reversed[i]);                 //Take input of reversed string
  }
  return reversed;
}
