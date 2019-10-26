#include <iostream>
using namespace std;
void leap_year(long a)
{
    if(a%100==0)
    {
        if(a%400==0)
        {
            cout<<"Yes";
        }
        else
        {
            cout<<"No";
        }
    }
    else if(a%4==0)
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
    long y;
    cin>>y;
    cout<<"Enter the year. \n";
    leap_year(y);
    return 0;
}
