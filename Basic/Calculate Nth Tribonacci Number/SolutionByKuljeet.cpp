/*
if n = 0 then it'll show 0th element doesn't exist
if n = 1 or n = 2 then it'll return 0
and if n = 3 then it'll return 1
otherwise it'll return tri(n-1)+tri(n-2)+tri(n-3)
*/

#include <iostream>
using namespace std;

int tribonacci(int n)
{
    if(n == 1 || n == 2)
       return 0;

    if(n == 3)
       return 1;

   return tribonacci(n-1) + tribonacci(n-2) + tribonacci(n-3);
}


int main()
{
    int n;
    cout << "Enter vlaue of n:" << endl;
    cin >> n;
    if(n <= 0)
      cout << "\n Tribonacci Element doesn't exist";

    else
      cout << "Nth Tribonacci element is:" << tribonacci(n);

    return 0;
}
