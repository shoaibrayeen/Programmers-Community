#include<iostream>
using namespace std;

int product(int num)
{
    int pro = 1;
    while (num != 0) {
        if (num % 10 != 0) {
            pro = pro * (num % 10);
        }
        num = num / 10;
    }
    return pro;
}
int main()
{
    int x;
    cout << "Enter value:" << endl;
    cin >> x;
    cout << "Product: " << product(x);
}
