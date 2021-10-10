import java.util.Scanner;

public class Solution {
    public static int LIS(int[] arr, int[] dp) {
        int n = arr.length;

        int maxLen = 0;

        for (int i = 0; i < n; i++) {
            dp[i] = 1;
            for (int j = i - 1; j >= 0; j--) {
                if (arr[i] > arr[j]) {
                    dp[i] = Math.max(dp[i], dp[j] + 1);
                }
                maxLen = Math.max(dp[i], maxLen);
            }
        }

        return maxLen;
    }

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = scn.nextInt();
        }
        int[] dp = new int[n];

        System.out.println(LIS(arr, dp));
    }
}

// Input   :   {3, 10, 2, 1, 20}
// Output  :   3

// Input   :   {50, 3, 10, 7, 40, 80}
// Output  :   4

// Input   :   { 2, 1}
// Output  :   1

