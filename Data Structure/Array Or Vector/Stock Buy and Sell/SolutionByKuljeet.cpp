#include <algorithm>
#include <iostream>
using namespace std;

int getMaxProfit(int price[], int start, int end)
{
    if (end <= start)
        return 0;

    int profit = 0;
    for (int i = start; i < end; i++) {
        for (int j = i + 1; j <= end; j++) {
            if (price[j] > price[i]) {
                int current_profit = price[j] - price[i] + getMaxProfit(price, start, i - 1) + getMaxProfit(price, j + 1, end);
                profit = max(profit, current_profit);
            }
        }
    }
    return profit;
}

int main()
{
    int n;
    cout << "Enter the size of an array:" << endl;
    cin >> n;
    int price[n];
    cout << "Enter the Stock elements:" << endl;
    for (int i = 0; i < n; i++)
        cin >> price[i];

    cout << "Maximum Profit is: " << getMaxProfit(price, 0, n - 1);
    return 0;
}