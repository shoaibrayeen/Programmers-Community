#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> lengths, int upperBound)
{
    int start = 0, end = lengths.size() - 1;
    int upper = -1;
    while (start <= end) {
        int mid = (start + end) / 2;
        if (lengths[mid] >= upperBound) {
            upper = mid;
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return upper;
}

int lengthOfLIS(vector<int>& nums)
{
    vector<int> dp(nums.size() + 1, INT_MAX);
    dp[0] = INT_MIN;

    for (int i = 0; i < nums.size(); i++) {
        int j = binarySearch(dp, nums[i]);
        if (dp[j - 1] < nums[i] and nums[i] < dp[j]) {
            dp[j] = nums[i];
        }
    }
    int lis = 1;
    for (int i = 1; i <= nums.size(); i++) {
        if (dp[i] != INT_MAX)
            lis = i;
    }
    return lis;
}

int main()
{
    int n, num;
    vector<int> nums;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> num;
        nums.push_back(num);
    }

    cout << lengthOfLIS(nums);
    return 0;
}
