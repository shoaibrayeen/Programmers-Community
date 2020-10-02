/*
    Base and its power are given. You need to implement power function without using power operation.
    Base and power could be negative as well as positive.

*/
#include<iostream>
using namespace std;


int power_num(int base,int power)
{
    if(power==0)
        return 1;
    else
        return base*power_num(base,power-1);
}


int main()
{
    int base,power;

    cout<<"Enter base ";
    cin>>base;
    cout<<"Enter power ";
    cin>>power;

    cout<<endl;

    if(power==0 && base==0)
         cout<<"Indeterminante form\n";
         
    else if(power>=0 )                                                  //for positive power
        cout<<power_num(base,power);
        
    else
    {                                                                    //for negative power
        power*=-1;
        cout<<(float)1/power_num(base,power);
    }
}
