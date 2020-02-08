#include<iostream>
using namespace std;

float calculatePower(int base,int power){
    if(power==0){
        return 1;
    }
    if(power>0){
        int pro = 1;
        for(int i=0; i<power;i++){
            pro = pro * base;
        }
    return pro;
    }
    if(power<0){
        power = -1* power;
        float pro = 1;
        for(int i=0; i<power;i++){
            pro = pro * base;
        }
    return (1/pro);
    }
return -1;
}

int main(){
    int base,power;
    cin>>base>>power;
    cout<<"base = "<<base<<", power = "<<power<<endl;
    cout<<"output = "<<calculatePower(base,power);
return 0;
}
