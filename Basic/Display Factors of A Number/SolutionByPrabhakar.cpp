#include <iostream>
using namespace std;
int factors(int a)
{int i=1;
while(a!=0)
{
    if(a%i==0)
    {   if(i!=a)
        {
            cout<<i;
            cout<<",";
        }
        else
        {
            cout<<i;
        }
    }
    i++;
}
}
int main()
{
int p;
cin>>p;
factors(p);
return 0;
}
