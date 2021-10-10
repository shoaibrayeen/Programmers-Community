#include <iostream>
using namespace std;
int main(){
   int n, l, sl;
   cin>>n;
   int *num = new int[n];
   for(int i=0; i<n; i++){
     cin>>num[i];
   }
   if(num[0]<num[1]){ 
      l = num[1];
      sl = num[0];
   }
   else{ 
      l = num[0];
      sl = num[1];
   }
   for (int i = 2; i< n ; i ++) {
      
      if (num[i] > l) {
         sl = l;
         l = num[i];
      }
      else if (num[i] > sl && num[i] != l) {
         sl = num[i];
      }
   }
   cout<<"Second Largest: "<<sl;
   return 0;
}
