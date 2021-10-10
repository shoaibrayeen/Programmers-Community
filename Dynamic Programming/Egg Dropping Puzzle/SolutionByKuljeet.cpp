#include <algorithm>
#include <iostream>
#include <limits.h>
using namespace std;

int eggDrop(int floors, int eggs)
{
    int dp[floors + 1][eggs + 1] = { 0 };
    for (int egg = 0; egg <= eggs; egg++) {
        dp[0][egg] = 0;
    }
    for (int egg = 0; egg <= eggs; egg++) {
        dp[1][egg] = 1;
    }
    for (int floor = 0; floor <= floors; floor++) {
        dp[floor][0] = 0;
    }
    for (int floor = 0; floor <= floors; floor++) {
        dp[floor][1] = floor;
    }
    for (int egg = 2; egg <= eggs; egg++) {
        for (int floor = 2; floor <= floors; floor++) {
            int mini = INT_MAX;
            for (int i = 1; i <= floor; i++) {
                int ans = max(dp[i - 1][egg - 1], dp[floor - i][egg]);
                ans++;
                mini = min(mini, ans);
            }
            dp[floor][egg] = mini;
        }
    }
    return dp[floors][eggs];
}

int main()
{
    int floors, eggs;
    cin >> floors >> eggs;
    cout << "Number of trials when number of eggs is " << eggs;
    cout << " and number of floors is " << floors;
    cout << ": " << eggDrop(floors, eggs);
    return 0;
}
