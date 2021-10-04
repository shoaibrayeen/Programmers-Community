#include<bits/stdc++.h>
using namespace std;

int search(vector<int>& nums, int target) {
    int start = 0, end = nums.size() - 1;
    while (start <= end) {
        int mid = (start + end) / 2;
        if (nums[mid] == target)
            return mid;
        else if (nums[mid] > target)
            end = mid-1;
        else
            start = mid+1;
    }
    return -1;
}

int main() {
    int n, num, target;
    vector<int> nums;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> num;
        nums.push_back(num);
    }
  
    cin >> target;

    cout << search(nums, target) << endl;
    return 0;
}
