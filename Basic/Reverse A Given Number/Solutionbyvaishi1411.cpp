//C++program to reverse given +ve number
#include <iostream>
using namespace std;

int reverse(int); //pototype of reverse function

//Driver Code
int main()
{
    int shi;
    cout << "Enter a number:";
    cin >> shi;
    if (shi < 0)
        cout << "You entered negitive integer!!";
    else
        cout << "Reverse of number is: " << reverse(shi); //Call for reverse function
    return 0;
}
//definition of reverse function to reverse given +ve number
int reverse(int shi)
{
    int rev = 0;
    while (shi > 0) {
        rev = rev * 10 + shi % 10;
        shi = shi / 10;
    }
    return rev;
}
