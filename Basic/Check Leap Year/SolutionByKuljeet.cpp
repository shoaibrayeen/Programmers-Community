#include <iostream>
using namespace std;

bool isLeap(int n)
{
    if(n%400 == 0)
    {
        return true;
    }
    else if(n%100 == 0)
    {
        return false;
    }
    else if(n%4 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}


int main()
{
    int n;
    cout << "\nEnter value of n:";
    cin >> n;
    if(isLeap(n))
       cout << "Yes" <<endl;
    else
       cout << "No";

  return 0;
}