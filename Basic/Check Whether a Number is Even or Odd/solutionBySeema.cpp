/*
Author : Seema Kumari Patel
Problem : To determine if the given number is even or odd.
Input : Number (integer)
Output : Conclusion , if the number is even or odd.
*/

#include <bits/stdc++.h>
using namespace std;
// function to check whether a number is odd or even
void evenOdd(int num)
{
    if (num % 2 == 0) {

        cout << "Even";
    } else {
        cout << "Odd";
    }
}
// Main function
int main()
{

    int n;
    cout << "enter the a number : ";
    cin >> n;
    evenOdd(n);
    cout << endl;

    return 0;
}