#include<bits/stdc++.h>
using namespace std;
bool CheckPowerOf2(int n){
	
  if( n && !(n&(n-1)))
    return true;
  return false;
	
}
int main()
{
  int n , x;
  cin>>n;
  int ans = 0;
  for(int i=0;i<n;i++){
    cin>>x;
    ans = ans^x;
  }
  cout<<ans<<endl;
  return 0;
}
