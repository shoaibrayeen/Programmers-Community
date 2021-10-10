import java.util.*;

public class Solution {
    public static int majorityElement(int[] nums) {
        int count = 0;
        Integer candidate = null;

        for (int num : nums) {
            if (count == 0) {
                candidate = num;
            }
            count += (num == candidate) ? 1 : -1;
        }

        return candidate == null ? -1 : candidate;
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int size = sc.nextInt();
        int[] arr = new int[size];
        for (int i = 0; i < size; i++) {
            arr[i] = sc.nextInt();
        }
        int result = majorityElement(arr);
        if (result == -1)
            System.out.println("No Majority Element Found");
        else
            System.out.println("Majority Element Found = " + result);
    }
}
