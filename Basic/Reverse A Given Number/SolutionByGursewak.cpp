#include <conio.h>
#include <iostream>
using namespace std;

int getSum(long long int num)
{
    int sum = 0;
    while (num != 0) {
        sum *= 10;
        sum += (num % 10);
        num = num / 10;
    }
    return sum;
}
int main(int argc, char const* argv[])
{
    long long int num;
    cout << "Enter number to reverse.\n";
    cin >> num;
    cout << getSum(num) << " is answer";
    return 0;
}
