/*
     A positive number N is given to you and You need to calculate its factorial.
*/
#include<iostream>
using namespace std;

int factorial(int);

int main()
{
    int num;

    cout<<"Enter a number: ";
    cin>>num;


    cout<<"\nFactorial of " << num << " is "<<factorial(num);

    return 0;
}
int factorial(int n)
{                              //factorial using recursion
    if( n == 0 )
        return 1;
    else
        return n*factorial(n-1);

}
