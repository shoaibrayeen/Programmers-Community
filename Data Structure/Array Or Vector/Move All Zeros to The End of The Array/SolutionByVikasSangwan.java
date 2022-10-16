
import java.util.Arrays;
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
        System.out.println("Array =" + Arrays.toString(solutionByVikasSangwan.moveZeroes(nums)));
    }

    int[] moveZeroes(int[] nums) {
        int count = 0;
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] == 0) count++;
        }
        int[] newNum = nums;
        int i = 0, newI = 0;
        while (i < nums.length) {
            if (nums[i] != 0) {
                newNum[newI] = nums[i];
                newI++;
            }
            i++;
        }
        while (newI < nums.length) {
            newNum[newI] = 0;
            newI++;
        }
        return newNum;
    }

}
