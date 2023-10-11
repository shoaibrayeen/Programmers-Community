//Tribonacci series
#include <iostream>
using namespace std;
int tribonacci(int n)
{
    if (n == 1) {
        return 0;
    } else if (n == 2) {
        return 0;
    } else if (n == 3) {
        return 1;
    } else {
        int a = 0;
        int b = 0;
        int c = 1;
        int ans;
        for (int i = 4; i <= n; i++) {
            ans = a + b + c;
            a = b;
            b = c;
            c = ans;
        }
        return ans;
    }
}
int main()
{
    int num;
    cout << "enter the num " << endl;
    cin >> num;
    cout << tribonacci(num);
    return 0;
}
