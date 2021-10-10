#include <iostream>
using namespace std;

/*
Program Description: A Number is given and You need to reverse it.
Output: Reverse of the number
Solution Description: I will traverse the number from the last digit and will go to the very first digit and will keep on storing each digit in a varibale and then deleting that digit from the number and then that new variable will result to be the reverse of the given number.
*/

int reverse_number(int num)
{
    int reverse = 0;
    while (num != 0) {
        reverse = reverse * 10;
        reverse = reverse + (num % 10);
        num = num / 10;
    }
    return reverse;
}

int main()
{
    int num;
    cin >> num;
    cout << reverse_number(num);
    return 0;
}
