class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> maxH;
        for(int i:nums){
            maxH.push(i);
        }
        k = k-1;
        while(k--){
            maxH.pop();
        }
        return maxH.top();
    }
};
