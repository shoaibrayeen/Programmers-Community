#include <iostream>
using namespace std;
int main()
{
    int n,flag=0;
    cin>>n;
 if (n==1)
 {
     cout<<"N0";
 }
 else
 {
     for(int i=1;i<=n;i++)
     {
         if(n%i==0)
         {
             flag++;
         }
     }
     if(flag==2)
     {
         cout<<"YES";
     }
     else
     {
         cout<<"NO";
     }
 }
}
