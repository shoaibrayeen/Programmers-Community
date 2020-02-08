#include<stdbool.h>
#include<stdio.h>
#include<iostream>

using namespace std;

bool oppositeSigns(int a, int b)
{
    return ((a ^ b) < 0);
}

int main()
{
  int x , y ;
  cout<<"Enter the two integers to be compared"<<endl;
  cin>>x>>y;
  if (oppositeSigns(x, y) == true)
      printf ("Yes");
  else
      printf ("No");
  
  return 0;
  
} 
