#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter a number: ";
    cin>> n;
    
    int a = 0;
    int b = 1;
    int c;
    
    cout<<"\n"<<a;
    cout<<"\n"<<b;
    
    int j=2;
    while(j<n)
    {
        c=a+b;
        a=b;
        b=c;
        
        cout<<"\n"<<c;
        j++;
    }
    return 0;
}
