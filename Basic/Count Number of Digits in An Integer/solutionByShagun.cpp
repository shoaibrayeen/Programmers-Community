#include<iostream>
using namespace std;

int main()
{
    long int n;
    int count = 0;
    cout<<"Enter a number\t:\t";
    cin>>n;
    if(n <= 9 && n >= 0) {
      count++;
      cout<<"\nTotal Digits\t:\t"<<count;
    }
    else if ( n < 0 ) {
        n = ~n;
        while(n!= 0) {
            count++;
            n /= 10;
        }
        cout<<"\nTotal digits\t:\t"<<count;
    }
    else {
        while(n!= 0) {
            count++;
            n /= 10;
        }
        cout<<"\nTotal digits\t:\t"<<count;
    }
    cout << endl;
    return 0;
}
