
import java.util.Scanner;

class SolutionByVikasSangwan {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter size: ");
        int n = sc.nextInt();
        int[] nums = new int[n];
        for (int iterator = 0; iterator < n; iterator++) {
            int input = sc.nextInt();
            nums[iterator] = input;
        }
        SolutionByVikasSangwan solutionByVikasSangwan = new SolutionByVikasSangwan();
        System.out.println("Max Sum Circular Sub array =" + solutionByVikasSangwan.maxSumCircularSubArray(nums));
    }

    public int maxSumCircularSubArray(int[] num) {
        int nonCircularSum = kadaneMaxSumAlgo(num);
        int totalSum = 0;
        for (int i = 0; i < num.length; i++) {
            totalSum += num[i];
            num[i] = -num[i];
        }

        int circularSum = totalSum + kadaneMaxSumAlgo(num);
        if (circularSum == 0)
            return nonCircularSum;
        return Math.max(circularSum, nonCircularSum);
    }

    int kadaneMaxSumAlgo(int[] num) {
        int currentSum = num[0];
        int maximumSum = num[0];
        for (int i = 1; i < num.length; i++) {
            if (currentSum < 0)
                currentSum = 0;
            currentSum = num[i] + currentSum;
            maximumSum = Math.max(maximumSum, currentSum);
        }
        return maximumSum;
    }
}



