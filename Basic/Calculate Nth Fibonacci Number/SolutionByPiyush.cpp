#include<iostream>
using namespace std;

/*
Program Description: A positive number N is given to you and You need to calculate Nth Number in Fibonacci Series.
Input: Positive Number
Return: Nth number of the fibonacci series where N represents the given "Positive Number".
Solution Description: I will follow a recursive approach to find the Nth number of the fibonacci series.
*/

int Nth_of_Fibonacci(int Number)
{
    if(Number <= 2)
        return Number-1; 
    else
        return Nth_of_Fibonacci(Number - 1) + Nth_of_Fibonacci(Number - 2);
}
int main()
{
    int Number = 0;
    cout<<"\Enter the number representing the Nth position of the fbonacci series:";
    cin>>Number;
    if(Nth_of_Fibonacci(Number) == -1) // the value returned by the function can be -1 as for 0,1,2 the function is returning (Number-1) so for input '0' the function will return '-1'.
        cout<<"\nFibonacci series at 0th element doesn't exist.";
    else
        cout<<Nth_of_Fibonacci(Number);
    return 0;
}

