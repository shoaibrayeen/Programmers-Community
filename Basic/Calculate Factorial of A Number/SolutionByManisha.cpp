#include<iostream>
using namespace std;

int factorial(int x) {
    long int p = 1;
    for(int i = 1; i <= x; i++)
    {
        p = p*i;
    }
    return p;
}

int main()
{
    int n;
    cout<<"Enter Number\t:\t";
    cin>>n;
    cout<<"Factorial is "<<factorial(n) << endl;
    return 0;
}
