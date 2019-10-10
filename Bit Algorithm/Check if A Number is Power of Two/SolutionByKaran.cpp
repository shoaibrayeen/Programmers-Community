#include <iostream>
using namespace std;
int div_by_2(int n)
{
    if(n==0)
	  {
		    return 0;
	  }
	  while(n!=1)
	  {
		   if(n%2!=0)
		   {
			    return 0;
		   }
		   n=n/2;
	  }
	  return 1;
}
int main() 
{
    int a;
    cout<<"Enter the number: ";
    cin>>a;
    if(div_by_2(a))
    {

        cout<<"Power of two";
    }
    else
    {
        cout<<"Not a power of two";
    }
    return 0;
}
