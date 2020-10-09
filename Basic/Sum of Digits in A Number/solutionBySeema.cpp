/*
Author : Seema Kumari Patel
Problem : To display the sum of digits of a number
Input : Number (Intger)
Output : Sum of all digits of the number (eg : 125 = 1+2+5= 8)
*/

#include <bits/stdc++.h>

void sum(int n)
{
    int add = 0;
    while (n > 0)
    {
        add = add + (n % 10);
        n = n / 10;
    }
    cout << add << endl;
}

int main()
{
    int num;
    cout << "enter the number ";
    cin >> num;
    sum(num);
    return 0;
}
