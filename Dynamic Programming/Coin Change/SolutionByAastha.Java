/*
Sample Input
4
2
3
5
6
7

Sample Output
2
*/

import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        int[] coins = new int[n];

        for (int i = 0; i < n; i++) {
            coins[i] = scn.nextInt();
        }
        int amt = scn.nextInt();

        int[] dp = new int[amt + 1];
        dp[0] = 1;
        for (int coin : coins) {
            for (int i = 1; i < dp.length; i++) {
                if (i >= coin) {
                    dp[i] += dp[i - coin];
                }
            }
        }

        System.out.println(dp[amt]);
    }
}
