#include <iostream>
using namespace std;
int main(){
   int n;
   cin >> n;
   bool IsPrime=1;
   for(int i=2; i<n; i++){
    if(n%i==0){

         IsPrime=0;
         break;
         
         
    }
    else{
        IsPrime=1;
    }
   }
if(IsPrime){
    cout<<"Prime"<<endl;
}
else{
    cout<<"Not prime"<<endl;
}
    return 0;
}