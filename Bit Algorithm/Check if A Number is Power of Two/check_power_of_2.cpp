
#include <iostream>

using namespace std;


int checkpower2(int num){
    // If the quotient becomes 1 on dividing the number again and again by 2 ,then number is a power of 2
    
    
    int quo =4;
    int power=0;
    int original_num = num;
    int flag=1;
    int mod=0;
    
    
    while(quo > 1) {       // If quotient <= 1, then stop
     
    quo = num/2;
    mod=num%2;
    cout<<quo<<"\n";
    
    // Now the quotient becomes the new number ,that needs to be again divided by 2
    
    num = quo;
    power++;
    if(mod!=0){ // If the remainder , is not one ,then not a power of 2
        flag=0;
        break;
    }
    }
   
  if (flag==0){
     cout<<original_num<<":= Not a power of 2";
  }
   else{
       cout<<"It is a power of 2\n";
       cout<<"the number is "<<power<< " power of 2";
   }
   
   
}


int main()
{
    int number = 1024;
    
    checkpower2(number);

}
