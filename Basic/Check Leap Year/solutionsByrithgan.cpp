#include <iostream>
using namespace std;

int main(){
    cout<<"Enter a year ";
    int y;
    cin>>y;
    if(y%4==0)
        cout<<"leap year";
    else if(y%100==0 || y%400==0)
        cout<<"leap year";
    else
    {
        cout<<"not a leap year";
    }
    return 0;
}