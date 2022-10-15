#include<iostream>
using namespace std;
int reverse(int num)
{
    int rev = 0;
    for (int i = num; i != 0; i /= 10) {
        rev = rev * 10;
        rev = rev + (i % 10);
    }
    return rev;
}
int main()
{
    int num;
    /**********input*************/
    cout << "enter the number ";
    cin >> num;
    cout << "\n reverse is \n"
         << reverse(num);
}
