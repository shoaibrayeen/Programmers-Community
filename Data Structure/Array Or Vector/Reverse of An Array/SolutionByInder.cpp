#include <iostream>
using namespace std;
int main()
{
    int t; //test case
    cin>>t;
    while(t--)
    {
        int n;  // varialble for size of an array
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
         for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" "<<endl;
        }
    }
  }
