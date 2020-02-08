#include <iostream>

using namespace std;
void isEven(int p)
{
     if(p>0)
 {
 if((p&1)==1)
 {
     cout<<"Odd";
 }
 else
 {
     cout<<"Even";
 }
 }
}
int main()
{
 int a;
 cin>>a;
isEven(a);
    return 0;
}
