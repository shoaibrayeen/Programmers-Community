#include<iostream>
using namespace std;

int main()
{
    int m;
    cin>>m;
    int x=0;
    while(m!=0)
    {
        x=x*10+m%10;
        m=m/10;
    }
    cout << x;
    return 0;
}
