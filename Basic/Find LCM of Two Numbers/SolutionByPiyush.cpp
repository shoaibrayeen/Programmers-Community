#include<iostream>
using namespace std;

/*
Program Description: Two numbers are given to you and You need to find LCM of them.
Input: Both Numbers.
Output: Return LCM of Both Numbers
Solution Description: I will check for the larger number and then run a while loop until I find that mutiple of the larger value for which the smaller value will gve 0 remainder. By this approach I will find the LCM of the given two numbers.
*/

int LCM(int num1, int num2) // Function to find the LCM
{
    int max = 0 , min = 0;
    if(num1 > num2)
    {
        max = num1;
        min = num2;
    }
    else
    {
        max = num2;
        min = num1;
    }
    while(1)
    {
        if(max % min == 0)
            return max;
        else
            max += max;
    }
}

int main()
{
    int num1=0, num2=0;
    cout<<"\nEnter the 2 numbers you want to find the LCM of:";
    cin>>num1>>num2;
    cout<<LCM(num1, num2);
    return 0;
}
