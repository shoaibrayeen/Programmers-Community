//power optimised
#include<iostream>
using namespace std;
int power_optimised(int base,int power){
    int number=1;
    while(power>0){
        int last_bit=(power&1);    //it is used to takeout last bit 
        if(last_bit){             //if last bit is set or not
            number=number*base;    //base is multiplied with the previous base;
        }
        base=base*base;            //base is squred every time
        power=power>>1;
    }
    return number;
}
int main(){
    int base,power;
    cin>>base>>power;
    cout<<power_optimised(base,power);
}
