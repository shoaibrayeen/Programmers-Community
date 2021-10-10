#  include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int c=0;
    while(n!=0)
    {
        c*=10+n%10;
        n/=10;
    }return 0;

}