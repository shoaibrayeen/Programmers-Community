 
#include<iostream>
using namespace std;

int main() {
   long long int final=0,n ,rem=0,pow=1;

    cin >> n;
    while ( n>0)
    {
        rem = n%2;
        n=n/2;
        final=final + rem * pow;
        pow *=10;
    }
    cout << final <<endl;

}
