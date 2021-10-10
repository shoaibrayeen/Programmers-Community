/*
    Given a rod of length n inches and an array of prices that contains prices of all pieces of size smaller than n. Determine the maximum value obtainable by cutting
    up the rod and selling the pieces.

    For example, if length of the rod is 8 and the values of different pieces are given as following, then the maximum obtainable
    value is 22 (by cutting in two pieces of lengths 2 and 6)
    length | 1 2 3 4 5 6 7 8
    price | 1 5 8 9 10 17 17 20

*/
#include <iostream>
using namespace std;

int max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}
int rod_cutting_price(int* length, int* prices, int l)
{
    int t[l + 1][l + 1];

    for (int i = 0; i < l + 1; i++) {
        t[i][0] = 0;
        t[0][i] = 0;
    }

    for (int i = 1; i < l + 1; i++) {
        for (int j = 1; j < l + 1; j++) {
            if (length[i - 1] <= j)
                t[i][j] = max(prices[i - 1] + t[i][j - length[i - 1]], t[i - 1][j]);

            else
                t[i][j] = t[i - 1][j];
        }
    }
    return t[l][l];
}
int main()
{
    int n;
    cout << "Enter the length of rod ";
    cin >> n;

    int* prices = new int[n];
    int* length = new int[n];

    for (int i = 0; i < n; i++)
        length[i] = i + 1;

    cout << "Enter the prices for each pieces ";
    for (int i = 0; i < n; i++)
        cin >> prices[i];

    cout << "\nMaximum price can be obtain by cutting up the rode is : " << rod_cutting_price(length, prices, n);

    cout << endl;
}
