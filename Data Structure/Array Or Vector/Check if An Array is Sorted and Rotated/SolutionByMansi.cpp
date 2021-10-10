#include <bits/stdc++.h>
using namespace std;

bool isSorted(vector<int>& nums)
{
    for (int i = 0; i < nums.size() - 1; i++) {
        if (nums[i] > nums[i + 1]) {
            return false;
        }
    }
    return true;
}

int findPivot(vector<int>& nums, int start, int end)
{
    while (start <= end) {
        int mid = (start + end) / 2;
        if (mid < end and nums[mid] > nums[mid + 1])
            return mid;
        if (mid > start and nums[mid] < nums[mid - 1])
            return mid - 1;
        if (nums[start] >= nums[mid])
            end = mid - 1;
        else
            start = mid + 1;
    }
    return -1;
}

bool check(vector<int>& nums)
{
    int left = 0, right = nums.size() - 1, pivot = -1;
    if (isSorted(nums))
        return true;
    if (nums[left] >= nums[right]) {
        pivot = findPivot(nums, left, right);
        int temp = pivot;
        if (left < pivot) {
            while (pivot > left) {
                if (nums[pivot] < nums[pivot - 1]) {
                    return false;
                }
                pivot--;
            }
        }
        pivot = temp;
        if (pivot < right) {
            pivot++;
            while (pivot < right) {
                if (nums[pivot] > nums[pivot + 1]) {
                    return false;
                }
                pivot++;
            }
        }
        return true;
    } else
        return false;
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

    cout << check(nums);
    return 0;
}
