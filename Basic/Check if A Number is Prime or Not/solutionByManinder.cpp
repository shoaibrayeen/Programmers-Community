#include <iostream>
using namespace std;

int main() {
    int t;
    int n;
   
    cin>>t;
    for(int j = 1; j<=t;j++){

      // cout<< "enter value "<<j<<endl;
    cin>>n;
    bool flag = true;
        
    for(int i = 2;i*i<n;i++){
        if (n % i == 0){
        flag = false;
        break;
      }

     } 

  if(flag) 
  cout<<"prime"<<endl;
  else 
  cout<<"not prime"<<endl;
   }


// write your code here

}
