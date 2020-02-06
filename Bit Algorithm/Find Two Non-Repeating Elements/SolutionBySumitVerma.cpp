#include<bits/stdc++.h>
using namespace std;
vector<int> Find2NonR(vector<int> v, int n){
  vector<int> ans(2,0);
  int x = 0;
  for(int i=0;i<n;i++)
    x=x^v[i];
  int set_bit = x & ~(x-1);
  for(int i=0;i<n;i++)
    if(v[i]&set_bit)
      ans[0]=ans[0]^v[i];
    else
      ans[1]=ans[1]^v[i];
  return ans;
}
int main()
{
  int n , x;
  cin>>n;
  vector<int> v(n);
  for(int i=0;i<n;i++)
    cin>>v[i];
  vector<int> ans = Find2NonR(v,n);
  cout<<ans[0]<<" and "<<ans[1]<<endl;
  return 0;
}
