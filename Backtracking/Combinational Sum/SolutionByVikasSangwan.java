
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Scanner;

public class SolutionByVikasSangwan {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter size: ");
        int n = sc.nextInt();
        int[] nums = new int[n];
        for (int iterator = 0; iterator < n; iterator++) {
            int input = sc.nextInt();
            nums[iterator] = input;
        }
        System.out.print("Enter target sum: ");
        int target = sc.nextInt();
        SolutionByVikasSangwan solutionByVikasSangwan = new SolutionByVikasSangwan();
        System.out.println("Possible Combination Sums =" + solutionByVikasSangwan.combinationSum(nums, target));
    }

    public List<List<Integer>> combinationSum(int[] candidates, int target) {
        Arrays.sort(candidates);
        List<List<Integer>> ans = new ArrayList<>();
        backtrack(0, candidates, new ArrayList<>(), ans, target);
        return ans;
    }

    void backtrack(int start, int[] arr, List<Integer> temp, List<List<Integer>> ans, int target) {
        if (target == 0) {
            ans.add(new ArrayList<>(temp));
            return;
        }
        for (int i = start; i < arr.length; i++) {
            if (arr[i] <= target) {
                temp.add(arr[i]);
                backtrack(i, arr, temp, ans, target - arr[i]);
                temp.remove(temp.size() - 1);
            } else {
                break;
            }
        }
    }

}
