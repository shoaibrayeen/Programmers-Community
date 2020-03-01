#include <iostream>
using namespace std;

int main()
{
 int n,product=1;
 cin>>n;
 while(n>0)
 {
     int N = n%10;
     if (N!=0)
     {
        product = product * N;
     }
     n = n/10;
 }
 cout<<product;
 return 0;
}
