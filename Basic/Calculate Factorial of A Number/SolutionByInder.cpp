#include <iostream>
using namespace std;
int factorial (int v)
{
    if (v>1)
    {
        return v * factorial(v-1);
    }
    else 
    {
    return 1;
    }
}
int main()
{
  int n;
  cin>>n;
  cout<<factorial (n);
}
