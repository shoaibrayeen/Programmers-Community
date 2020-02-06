//calculating factorial of a number using recusion
#include<iostream>
using namespace std;
int fac(int x)
{
  if(x==0 || x==1)
    return 1;
  else 
    return(x*fac(x-1));
}
int main()
{
  int a;
  cin>>a;
  int ans=fac(a);
  cout<<ans;
  return 0;
}
