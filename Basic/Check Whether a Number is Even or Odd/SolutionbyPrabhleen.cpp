#include <iostream>
using namespace std;
void isEven(int N)
{
  if(N>0)
  {
  if((N % 2)==0)
  {
     cout<<"Even";
  }
  else
  {
     cout<<"Odd";
  }
  }
 }
int main()
{
 int N;
 cin>>N;
 isEven(N);
 return 0;
}
