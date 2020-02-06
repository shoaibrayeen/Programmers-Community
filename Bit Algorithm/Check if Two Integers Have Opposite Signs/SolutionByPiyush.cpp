#include<iostream>
using namespace std;

/*
Program Description: Two numbers is given and you need to Check if they Have Opposite Signs.
Input: Both Numbers
Output: 'Yes' if they Have Opposite Signs 'No' otherwise
Solution Description: In this question I will use signed integers in order to get the sign along with the number and then in the function will compare the signs of the 2 numbers.
*/

int check_sign(signed int a, signed int b)
{
    if((a>0 && b<0) || (a<0 && b>0))
        return 1;
    else
        return 0;
}

int main()
{
    signed int a, b;
    cin>>a>>b;
    if(check_sign(a, b) == 1)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
