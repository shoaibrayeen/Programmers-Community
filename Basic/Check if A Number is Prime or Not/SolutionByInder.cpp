#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n,flag=0;
    cout << "\nEnter Number\t:\t";
    cin>>n;
    if (n==1)
    {
     cout<<"Neither Prime nor composite!";
    }
    else
    {
        for(int i = 2;i <= sqrt(n); i++)
        {
             if(n%i==0)
            {
                 flag = 1;
                 break;
            }
        }
        if( flag == 0 )
        {
            cout<<"It's prime.\n";
        }
        else
        {
            cout<<"It's not prime.\n";
        }
    }
    return 0;
}
