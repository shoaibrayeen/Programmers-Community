#include <bits/stdc++.h>

using namespace std;
#define ll long long int  

int main(){
   ll n,i;
   cin >> n;
   ll a[n];
   for(i=0;i<n;i++)
     cin >> a[i];
     sort(a,a+n,greater<int>());
     ll seclargest=a[0];
     for(i=1;i<n;i++){
        if(a[i]!=a[0]){
          seclargest=a[i];
          break;
          }
             }
        
cout << seclargest << endl;

return 0;

}

