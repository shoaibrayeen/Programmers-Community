import java.util.Scanner;

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
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter a number : ");
        int n=sc.nextInt();
        int[] nums=new int[n];
        for(int itr=0;itr<n;itr++)
        {
            int num=sc.nextInt();
            nums[itr]=num;
        }
        System.out.println("Max consecutive ones="+SolutionByHarshPandey.findMaxConsecutiveOnes(nums));
    }
}
