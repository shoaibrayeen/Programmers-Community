#include<bits/stdc++.h>
using namespace std;
bool checkpowerof2(int x)
{
    return(x&&!(x&(x-1));
}
int main()
{
    int x,;
    cin>>x;
    bool ans=checkpowerof2(x);
    if(ans)
      cout<<"Yes";
    else
      cout<<"No";
 }
