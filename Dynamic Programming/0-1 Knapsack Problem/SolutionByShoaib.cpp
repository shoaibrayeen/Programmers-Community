#include <iostream>
#include <vector>
using namespace std;

int knapSack(int W, vector<int> wt, vector<int>val) {
    int n = int(wt.size());
    int K[2][W+1];
    int i = 0;
    while (i < n) {
        int j = 0;
        if (i%2!=0) {
            while (++j <= W) {
                if (wt[i] <= j) {
                    K[1][j] = max(val[i] + K[0][j-wt[i]], K[0][j] );
                }
                else {
                    K[1][j] = K[0][j];
                }
            }
            
        }
        else {
            while(++j <= W) {
                if (wt[i] <= j) {
                    K[0][j] = max(val[i] + K[1][j-wt[i]], K[1][j]);
                }
                else {
                    K[0][j] = K[1][j];
                }
            }
        }
        i++;
    }
    return ( n % 2 != 0 )? K[0][W] : K[1][W];
}


int main() {
    int n;
    cout << "\nNumber of items\t:\t";
    cin >> n;
    vector <int> val(n) , wt(n);
    for ( int i = 0 ;i < n;i++) {
        cout << "\nEnter weight and its value for " << (i+1) << "\n";
        cin >> wt[i];
        cin >> val[i];
    }
    int w;
    cout << "\nEnter capacity of knapsack\t:\t";
    cin >> w;
    cout << "\nThe Result is\t:\t" << knapSack(w, wt, val) << endl;
    return 0;
}

