#include <iostream>
using namespace std;

int productDigits(int n)
{
    int product = 1;
    while(n != 0)
    {
        if(n%10 == 0)
        {
            n = n/10;
        }

        else
        {
            product = product*(n%10);
            n = n/10;
        }
    }

    return product; 
}


int main()
{
    int n;
    cout << "Enter value:" << endl;
    cin >> n;
    cout << "Product of digit is: " << productDigits(n);
  
  return 0;
}