#include <bits/stdc++.h>
 
using namespace std;
#define ll long long int
 
ll setbits(ll n)
{
   ll count=0;
    while(n)
    {
        count++;
        n=n&(n-1);
    }
    return count;
}
 
int main()
{
   ll n;
   while(cin>> n){
   cout << setbits(n)<< endl;
 
   }
    return 0;
}
