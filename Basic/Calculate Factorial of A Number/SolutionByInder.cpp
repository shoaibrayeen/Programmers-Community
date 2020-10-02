#include <iostream>
using namespace std;
int factorial (int v)
{
    if ( v < 0 ) 
    {
        return -1;
    }
    else if (v>1)
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
  cout << "\nEnter Number\t:\t";
  cin>>n;
  int retVal = factorial (n);
  if ( retVal == -1 )
  {
      cout<< "\nEnter Positive Number\n";
  }
  else if ( retVal > 0 ) { 
    cout<< "\nFactorial\t:\t" << retVal << endl;
  }
  else {
      cout<< "\nResult Overflowed\n";
  }
  return 0;
}
