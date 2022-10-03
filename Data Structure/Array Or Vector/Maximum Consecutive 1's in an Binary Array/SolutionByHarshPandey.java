
/*
Given a binary array nums, return the maximum number of consecutive 1's in the array.
*/

class SolutionByHarshPandey {
    public static int findMaxConsecutiveOnes(int[] nums) {
        int count=0;
        int maxOnes=0;
        int n=nums.length;
        for(int i=0;i<n;i++)
        {
            count=nums[i]==1?++count:0;
            maxOnes=Math.max(maxOnes,count);
        }
        return maxOnes;
    }
    public static void main (String[] args) {
        int[] nums={1,1,0,1,1,1};
        System.out.println("Max consecutive ones="+SolutionByHarshPandey.findMaxConsecutiveOnes(nums));
    }
}
