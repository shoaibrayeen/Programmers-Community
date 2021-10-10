#include <iostream>
using namespace std;

/*
Program Description: A Number is given and You need to find sum of all digits in the number.
Output: Sum of All Digits of the given number.
Solution Description: I will use the '%' operator to grab the last digit in the number and then sum it in a vaiable 'sum' and then divide the number by 10 in order to delete the last digit of the number and will keep on doing it until the value of number becomes '0'.
*/

int find_sum(int number)
{
    int sum = 0;
    while (number > 0) {
        sum += number % 10;
        number = number / 10;
    }
    return sum;
}

int main()
{
    int number;
    cout << "\nEnter the number:";
    cin >> number;
    cout << find_sum(number);
    return 0;
}
