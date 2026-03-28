#include <iostream>
using namespace std;

int main() {
    int num;
    cout<<"For Fibonacci";
    cout<<"\nEnter the number: ";
    cin>> num;
    
    int a = 0;
    int b = 1;
    int c;
    
    cout<<a<<" ";
    cout<<b<<" ";
    
    for(int i=2; i<num ;i++)
    {
        c=a+b;
        a=b;
        b=c;
        cout<<c<<" ";
    }
    return 0;
}
