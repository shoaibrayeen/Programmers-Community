#include <iostream.h>
using namespace std;
/*
Two positive numbers are given to you and you need to fund the LCM of the two numbers
Input: Two numbers
Output: LCM of the two numbers
Solution Description: I'll follow the if-else technique along with do-while to find the solution
*/
int main()
{
    int n1, n2, max;
    cout << "Enter two numbers: ";
    cin >> n1 >> n2;
    max = (n1 > n2) ? n1 : n2;
    do
    {
        if (max % n1 == 0 && max % n2 == 0)
        {
            cout << "LCM = " << max;
            break;
        }
        else
            ++max;
    } while (true);
    
    return 0;
}
