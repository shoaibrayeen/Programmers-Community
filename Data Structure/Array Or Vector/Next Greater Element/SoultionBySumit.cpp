#include<bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
  int n;
  
  cout<<"Enter Number of Elements : ";
  cin>>n;
  
  vector<int> input(n),output(n,-1);
  
  cout<<"Enter "<<n<<" Elements : ";
  for(int i=0;i<n;i++)
    cin>>input[i];
    
  int maxi = input[n-1];
  
  for(int i=n-2;i>=0;i--){
    if(maxi>input[i])
      output[i]=maxi;
    maxi = max(maxi,output[i]);
  }
  
  for(int i=0;i<n;i++)
    cout<<output[i]<<" ";
  cout<<endl;
    
}
