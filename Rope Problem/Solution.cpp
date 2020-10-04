/*Given a rope of length n, you need to find maximum number of 
pieces you can make such that length of every piece is in the set{a,b,c}
for given three values of {a,b,c}*/
#include <iostream>
using namespace std;
int max(int a,int b, int c)
{
    if(a>b&&a>c)
        return a;
    else if(b>a&&b>c)
        return b;
    else
        return c;
}
int maxcuts(int n,int a,int b,int c)
{
    if(n==0)
        return 0;
    if(n<0)
        return -1;
    int res = max(maxcuts(n-a,a,b,c),maxcuts(n-b,a,b,c),maxcuts(n-c,a,b,c));
    if(res == -1)
        return -1;
    return res+1;
}
int main()
{   int n,r1,r2,r3;
    cout<<"\n\tEnter the size of the rope : ";
    cin>>n;
    cout<<"\n\tEnter the length of rope pieces : ";
    cin>>r1>>r2>>r3;
    cout<<"\n\tThe no of pieces are : "<<maxcuts(n,r1,r2,r3);
    return 0;
}
