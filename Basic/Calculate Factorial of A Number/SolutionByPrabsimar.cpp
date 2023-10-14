#include <iostream>
using namespace std;
int main() 
{
int n;  
cout<<"Input: ";
cin>>n;
int ans=1;
while(n>0)
  {
      ans = ans*n;
      n=n-1;
  }
  cout<<"Output: "<<ans;
}
