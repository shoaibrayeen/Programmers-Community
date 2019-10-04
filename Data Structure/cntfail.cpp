#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,i;
        cin>>n;
        long long int a[n],p=INT_MIN,c=0,e=0,f=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            p=max(p,a[i]);
            if(a[i]==0)
                e++;
            if(a[i]==n-1)
                f++;
        }
        if(e==n)
            cout<<n<<"\n";
        else if(f==n)
            cout<<"0\n";
        else
        {
            for(i=0;i<n;i++)
            {
                if(p-a[i]==1)
                {
                    c++;
                }
            }
            if(c!=p)
                cout<<"-1\n";
            else
                cout<<n-p<<"\n";
        }
    }
    return 0;
}
