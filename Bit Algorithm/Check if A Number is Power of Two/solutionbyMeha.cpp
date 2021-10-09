#include<iostream>

using namespace std;
int main()
{int n;
cin>>n;
if(n&(n-1))
cout<<"No"<<'\n';
else
cout<<"Yes"<<'\n';
return 0;
}