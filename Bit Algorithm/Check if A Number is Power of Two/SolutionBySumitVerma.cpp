#include<bits/stdc++.h>
using namespace std;
bool CheckPowerOf2(int n){
	
  if( n && !(n&(n-1)))
    return true;
  return false;
	
}
int main()
{
  int n;
  cin>>n;
  if(CheckPowerOf2(n))
    cout<<"YES\n";
  else
    cout<<"NO\n";
  return 0;
}
