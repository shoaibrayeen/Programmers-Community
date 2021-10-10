#include <iostream>

using namespace std;

int sumByFormula(int n)
{
    int sum = 0;
    sum = ((n + 1) * (n + 2)) / 2;
    return sum;
}

int sumByAdding(int a[], int n)
{
    int i, sum = 0;
    for (i = 0; i < n; i++)
        sum = sum + a[i];
    return sum;
}
int main()
{
    int n, i, sum1, sum2 = 0;
    cout << "enter no. of terms";
    cin >> n;
    int a[n];

    //input terms of an array
    for (i = 0; i < n; i++)
        cin >> a[i];

    //sum by formula
    sum1 = sumByFormula(n);

    //sum by adding
    sum2 = sumByAdding(a, n);

    cout << "missing number = " << sum1 - sum2;
    return 0;
}
