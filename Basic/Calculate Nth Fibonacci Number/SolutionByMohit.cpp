#include <iostream>
using namespace std;

int Fibo(int n) {
    if ( n == 1) {
        return 0;
    }
    if ( n == 2 ) {
        return 1;
    }
    int f=0,s=1,t=0;
    for ( int i = 3; i <= n; i++ ) {
        t = f + s;
        f = s;
        s = t;
    }
    return s;

}
int main()
{
    int n;
    cout<<"\nEnter the Number\t:\t";
    cin>>n;
    cout << "Fibonacci Number\t:\t" <<Fibo(n) << endl;
}
