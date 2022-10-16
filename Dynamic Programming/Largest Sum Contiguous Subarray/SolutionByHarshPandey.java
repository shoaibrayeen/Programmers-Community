import java.util.*;

class SolutionByHarshPandey {

    public static int maxSumArray(int[] nums) {
        int max_sum_curr=0;
        int final_sum=Integer.MIN_VALUE;
        for(int i=0;i<nums.length;i++)
        {
            max_sum_curr+=nums[i];
            if(max_sum_curr>final_sum)
                final_sum=max_sum_curr;

            if(max_sum_curr<0)
                max_sum_curr=0;

        }
        return final_sum;
    }
    public static void main (String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter a number : ");
        int n=sc.nextInt();
        int[] nums=new int[n];
        for(int itr=0;itr<n;itr++)
        {
            int num=sc.nextInt();
            nums[itr]=num;
        }
        System.out.println("Maximum contiguous sum is "+SolutionByHarshPandey.maxSumArray(nums));
    }
}