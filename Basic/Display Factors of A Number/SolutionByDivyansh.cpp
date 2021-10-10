#include <iostream>
using namespace std;

int Dispfact(int N)
{
    for (int i = 1; i <= N; i++) {
        if (N % i == 0) {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}
int main()
{
    int N;

    cout << "Enter number to find it's factors: " << endl;
    cin >> N;

    cout << "Factors of " << N << endl;
    Dispfact(N);

    return 0;
}
