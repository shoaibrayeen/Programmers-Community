/*
    Two numbers is given and you need to Check if they Have Opposite Signs.
    Constraints:
                Number could be both negative and positive.
*/

#include <iostream>
using namespace std;

bool sign(int n1, int n2)
{
    int r = n1 ^ n2; //xor of oposite sign number  is always negative

    if (r > 0)
        return 0;

    return 1;
}

int main()
{
    int num1, num2;

    cout << "Enter 1st number ";
    cin >> num1;
    cout << "Enter 2nd number ";
    cin >> num2;

    bool check = sign(num1, num2);
    if (check == 1)
        cout << "\nYES!They have opposite sign";
    else
        cout << "\nNO";
}
