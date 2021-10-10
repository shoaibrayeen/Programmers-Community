/*
Sample Input
3
10

Sample Output
4
*/

import java.io.*;
import java.util.*;

public class Main {
    public static int eggDrop(int n, int k) {
        int[][] dp = new int[n + 1][k + 1];
        //when number of floors == 1 ans number of eggs >= 1, then we need only one attempt
        for (int i = 1; i <= n; i++) {
            dp[i][1] = 1;
        }
        //when number of eggs == 1
        for (int i = 1; i <= k; i++) {
            dp[1][i] = i;
        }

        for (int i = 2; i <= n; i++) {
            for (int j = 2; j <= k; j++) {
                dp[i][j] = Integer.MAX_VALUE;
                int max = Integer.MIN_VALUE;
                for (int f = 1; f <= j; f++) {
                    max = 1 + Math.max(dp[i - 1][f - 1], dp[i][j - f]);
                    if (max < dp[i][j]) {
                        dp[i][j] = max;
                    }
                }
            }
        }
        return dp[n][k];
    }

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        //n -> number of eggs and k -> number of floors
        int n = scn.nextInt();
        int k = scn.nextInt();
        System.out.println(eggDrop(n, k));
    }
}
