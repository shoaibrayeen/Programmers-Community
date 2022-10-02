#include <iostream>
using namespace std;

int knapsack(int* weights, int* values, int N, int maxW)
{
    int* prev = new int[maxW + 1];
    int* curr = new int[maxW + 1];
    for (int i = 0; i <= N; i++) {
        for (int j = 0; j <= maxW; j++) {
            if (i == 0 || j == 0)
                curr[j] = 0;
            else if (weights[i - 1] > j)
                curr[j] = prev[j];
            else
                curr[j] = max(values[i - 1] + prev[j - weights[i - 1]], prev[j]);
        }
        delete[] prev;
        prev = curr;
        curr = new int[maxW + 1];
    }

    return prev[maxW];
}
int main()
{

    int n;
    cin >> n;
    int* weights = new int[n];
    int* values = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> weights[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> values[i];
    }

    int maxWeight;
    cin >> maxWeight;

    cout << knapsack(weights, values, n, maxWeight);
}
