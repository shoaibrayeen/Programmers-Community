#include <iostream>
using namespace std;

int main()
{
 int n,flag=0;
 cin>>n;
 while(n>0)
 {
     n = n/10;
     flag++;
 }
 cout<<flag;
}
