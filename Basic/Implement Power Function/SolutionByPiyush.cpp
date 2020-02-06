#include <iostream>
using namespace std;

float raise_to_power(int number, int power) //function to make find the final value after raising the number to the given power.
{
    int result;
    result = number;
    
    if(power > 0)// CASE 1: Power is greater than 0.
    {
        for(int i = 2; i <= power; i++)
        {
            result = result * number;
        }
        return result;
    }
    else if(power < 0)// CASE 2: power is less than 0.
    {
        float result_negative_power= 1.0;//A float varibale to store the fraction values for negative powers
        for(int i = 2; i<= -(power); i++)
        {
            result = result * number;
        }
        result_negative_power = 1.0 / result; //calculating the result_negative_power by dividing the result by 1 in order to change it to the result for a negative power.
        return result_negative_power;
    }
    else// CASE 3: Power isequal to zero
    {
        return 1; //returning 1 because any number raised to the power 0 is 1.
    }
}

int main()
{
    int number=0, power=0;
    cout<<"\nenter the number:";
    cin>>number;
    cout<<"\nEnter the power to which you want to raise the number:";
    cin>>power;
    
    cout<<raise_to_power(number, power); // Calling the function to calculate the result and then printing the value that is returned by the function.
    return 0;
}
