#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter a binary number ";
    cin>>n;
    int sum=0,rem;
    for(int i=0;n>0;i++)
    {
        rem=n%10;
        sum=sum+(int)(pow(2,i))*rem;
        n/=10;

    }
    cout<<sum;
    return 0;
}
