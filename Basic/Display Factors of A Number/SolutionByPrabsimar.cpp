#include <iostream>
using namespace std;

void fact(int num)
{
    if (num == 1) {
        cout << num <<endl; 
        return;
    }
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            cout << i << "\t";
        }
    }
    cout << num <<endl;
}

int main()
{
    int n;
    cout << "Enter number:";
    cin >> n;
    cout << "\nFactors:\n";
    fact(n);
    return 0;
}
