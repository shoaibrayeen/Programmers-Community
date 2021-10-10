#include <bits/stdc++.h>
using namespace std;

struct Item {
    int value, weight;
    Item(int value, int weight)
        : value(value)
        , weight(weight)
    {
    }
};

bool cmp(struct Item a, struct Item b)
{
    double r1 = (double)a.value / a.weight;
    double r2 = (double)b.value / b.weight;
    return r1 > r2;
}

double fractionalKnapsack(int W, struct Item arr[], int n)
{
    sort(arr, arr + n, cmp);
    int curWeight = 0;
    double finalvalue = 0.0;
    for (int i = 0; i < n; i++) {
        if (curWeight + arr[i].weight <= W) {
            curWeight += arr[i].weight;
            finalvalue += arr[i].value;
        } else {
            int remain = W - curWeight;
            finalvalue += arr[i].value * ((double)remain / arr[i].weight);
            break;
        }
    }
    return finalvalue;
}

int main()
{
    int W, n;
    cout << "\nEnter Weight of Knapsack\t:\t";
    cin >> W;
    cout << "\nEnter Number of Items\t:\t";
    cin >> n;
    Item arr[n];
    for (int i = 0; i < n; i++) {
        cout << "\nEnter Value\t:\t";
        cin >> arr[i].value;
        cout << "\nEnter Weight\t:\t";
        cin >> arr[i].weight;
    }
    cout << "Maximum value\t:\t" << fractionalKnapsack(W, arr, n) << endl;
    return 0;
}
