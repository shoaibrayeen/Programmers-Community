#include <iostream>
using namespace std;
int fact(int);
int main()
{
    int n;
    cout << "Enter the number:";
    cin >> n;
    cout << "Factors are:";
    fact(n);
    return 0;
}
int fact(int num)
{
    for (int i = 1; i <= num; i++)
        if (num % i == 0) 
        {
            cout<<endl;
            cout<<i;
        }
    return 0;
}
