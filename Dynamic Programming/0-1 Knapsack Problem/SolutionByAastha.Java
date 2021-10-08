/*
Problem Statement:
You are given a number n, representing the count of items.
2. You are given n numbers, representing the values of n items.
3. You are given n numbers, representing the weights of n items.
3. You are given a number "cap", which is the capacity of a bag you've.
4. You are required to calculate and print the maximum value that can be created in the bag without overflowing it's capacity.

Sample Input
5
15 14 10 45 30
2 5 1 3 4
7

Sample Output
75
*/
import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        Scanner scn=new Scanner(System.in);
        int n = scn.nextInt();
        int[] values = new int[n];
        for (int i = 0; i < n; i++) {
            values[i] = scn.nextInt();
        }
        int[] wts = new int[n];
        for (int i = 0; i < n; i++) {
            wts[i] = scn.nextInt();
        }
        int cap = scn.nextInt();

        int[][] dp = new int[n + 1][cap + 1];
        for (int i = 1; i < dp.length; i++) {
            for(int j = 1; j < dp[0].length; j++){
                int val = values[i - 1];
                int wt = wts[i - 1];

                if(j >= wt){
                    dp[i][j] = Math.max(dp[i - 1][j], dp[i - 1][j - wt] + val);
                } else {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }
        System.out.println(dp[n][cap]);
    }
}
