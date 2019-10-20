#include<iostream>
using namespace std;

/*
Program Description: A positive number N is given to you and You need to calculate its factorial.
Input: Number
Return: Factorial of the given Number.
Solution Description: I will follow a recursive approach to find the factorial of the number.
*/

int fact_of_number(int Number) // This function is used as a recursive function
{
    if(Number == 0 )
        return 1;
    else
        return Number * fact_of_number(Number - 1); // Recursive function as first it was called for Number then (Number - 1)......and so on.
}
int main()
{
    int Number = 0;
    cout<<"\Enter the element:";
    cin>>Number;
    cout<<fact_of_number(Number);
    return 0;
}
