#include <iostream>
using namespace std;
void prime(int n)
{
    int k=0;
    for(int i=1;i<=n;i++)
    {
          if(n%i==0)
          {
              k++;
          }
    }
    if(k==2)
    {
          cout<<"Yes";
    }
    else
    {
          cout<<"No";
    }
	
}
int main() 
{	
    int a;
    cout<<"Enter the number: \n";
    cin>>a;
    prime(a);
    return 0;
}
