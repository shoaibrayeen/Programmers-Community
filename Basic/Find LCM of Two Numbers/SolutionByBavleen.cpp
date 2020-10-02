#include <iostream>
using namespace std;

int lcm(int x , int y)
{
    return (x*y)/gcd(x,y);
}

int main()
{
    int x,y;
    cout <<"\n Enter value of two numbers";
    cin >> x >> y;
    cout << "LCM of " << x << " and " << y << " is: " <<lcm(x,y);

  return 0;
}

© 2020 GitHub, Inc.
