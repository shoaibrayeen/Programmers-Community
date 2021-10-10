import java.util.*;

public class Main {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        String str;
        System.out.print("Enter the string\t:\t");
        str = sc.nextLine();
        int result = longestPalindromicSubsequnces(str);
        System.out.println("\nLength of LPS\t\t:\t" + result);
    }

    public static int longestPalindromicSubsequnces(String str) {
        int n = str.length();
        int[][] dp = new int[n][n];

        for (int gap = 0; gap < n; gap++) {
            for (int i = 0, j = gap; j < n; j++, i++) {
                if (gap == 0)   //gap one denotes single length string
                {
                    dp[i][j] = 1;
                } else if (str.charAt(i) == str.charAt(j)) {
                    dp[i][j] = dp[i + 1][j - 1] + 2;
                } else {
                    dp[i][j] = Math.max(dp[i + 1][j], dp[i][j - 1]);
                }
            }
        }

        return dp[0][str.length() - 1];

    }

}
