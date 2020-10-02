//to check if the string is palindrome or not using recursion
#include<iostream.h>
#include<conio.h>
#include<stdio.h>

int length(char a[])
{
  int len=0;
  for(int i=0;a[i]!='\0';i++)
  {
	len++;
  }
  return len;

}
int palindrome(char a[],int i, int j)
{
	if( a[i] != a[j] )
	{
		return 0;
	}
	else if ( i == j )
	{
		return 1;
	}
	else if( a[i] == a[j] )
	{
		if ( i + 1 == j )
		{
			return 1;
		}
		return palindrome(a,i+1,j-1);
	}

}
void main()
{
  char a[100];
  clrscr();
  cout<<"\nEnter the String\t:\t";
  gets(a);
  int size = length(a);
  int retval= palindrome(a,0,size-1);
  if (retval == 0)
  {
   cout<<"\nIt is not a Palindrome\n";
  }
  else
  {
   cout<<"\nIt is a Palindrome\n";
  }


  getch();

}
