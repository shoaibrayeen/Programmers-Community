#include<stdbool.h>
#include<stdio.h>
#include<iostream>
using namespace std;

bool oppositeSigns(int x, int y)
{
return ((x ^ y) < 0);
}

int main()
{
int x , y ;
cin>>x>>y;
if (oppositeSigns(x, y) == true)
printf ("Yes");
else
printf ("No");
return 0;
} 
