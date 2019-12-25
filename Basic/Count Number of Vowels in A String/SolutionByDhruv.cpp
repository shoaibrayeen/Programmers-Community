#include<iostream.h>
#include<conio.h>
void main()
{
  clrscr();
  char line[150];
  int vowels=0;
  cout << "Enter a line of string: ";
  cin.getline(line, 150);
  for(int i = 0; line[i]!='\0'; ++i)
  {
    if(line[i]=='a' || line[i]=='e' || line[i]=='i' || line[i]=='o' || line[i]=='u' || line[i]=='A' || line[i]=='E' || line[i]=='I' || line[i]=='O' ||
	   line[i]=='U')
    {
      ++vowels;
     }
   }
  cout<<"Number of vowels in\t"<<line<<"\tare:"<<vowels;
  getch();
}
