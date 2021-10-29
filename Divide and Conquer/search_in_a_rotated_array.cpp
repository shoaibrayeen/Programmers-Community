#include<bits/stdc++.h>
using namespace std;



    int search(vector<int>& nums , int si , int ei , int target){
        if(si>ei){
            return -1;
        }
        
        int mid = (si+ei)/2;
        
        if(nums[mid] == target){
            return mid;
        }else if(nums[si] <= nums[mid]){
            if(target>=nums[si] && target<nums[mid]){
                return search(nums , si , mid-1 , target);                 
            }else{
                return search(nums , mid+1 , ei , target);
            }

        }else if(nums[mid]<=nums[ei]){
            if(target>nums[mid] && target<=nums[ei]){
                return search(nums , mid+1 , ei , target);                 
            }else{
                return search(nums , si , mid-1 , target);
            }
        }
        
    }
    
    
    int search(vector<int>& nums, int target) {
        return search(nums , 0 , nums.size()-1 , target);
    }


    int main(){
        int n;
        cin>>n;
        vector<int> nums(n);
        for(int i=0 ; i<n ; i++){
            cin>>nums[i];
        }
        int target;
        cin>>target;
        cout<<search(nums , target)<<endl;
    }