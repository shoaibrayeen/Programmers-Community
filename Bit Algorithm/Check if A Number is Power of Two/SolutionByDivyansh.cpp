#include<iostream>
#include<math.h>
using namespace std;

int main() {

   int number,i=0,power=0,flag=0,x=2;
   
   cout<<"Enter number :"<<endl;
   cin>>number;

   while(power<number) {
      power=pow(x,i);
      
      if(power==number) {
        flag=1;
        break;
      }
      else {
        i++;
      }
    }

    if(flag==1){
        cout<<"YES"<<endl;
    }
    else {
      cout<<"NO"<<endl;
    }

    return 0;
}
