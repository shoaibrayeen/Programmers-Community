#include <iostream>     //  Header Files 
using namespace std;

int gcd(int x , int y)
{
    if(y == 0)
       return x;
    
   return gcd(y , x%y);
}

int lcm(int x , int y)
{
    return (x*y)/gcd(x,y);
}


int main()       // Driver Code 
{
    int x,y;
    cout <<"\n Enter value of two numbers";
    cin >> x >> y;
    cout << "LCM of " << x << " and " << y << " is: " <<lcm(x,y);

  return 0;
}
