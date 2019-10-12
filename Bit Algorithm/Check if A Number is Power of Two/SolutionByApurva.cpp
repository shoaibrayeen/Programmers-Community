#include <iostream.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number :";
    cin>>n;
    if(n != 0 && (n & (n-1)) == 0)
    {
        cout<<"Number is power of 2"<<endl;
    }
    else
    {
        cout<<"Number is not power of 2"<<endl;
    }
    return 0;
}
