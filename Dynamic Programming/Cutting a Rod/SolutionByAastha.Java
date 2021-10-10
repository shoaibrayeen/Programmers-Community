/*  QUESTION STATEMENT:-

    Given a rod of length n inches and an array of prices that contains prices of all pieces of size smaller than n. Determine the maximum value obtainable by cutting
    up the rod and selling the pieces.
    For example, if length of the rod is 8 and the values of different pieces are given as following, then the maximum obtainable
    value is 22 (by cutting in two pieces of lengths 2 and 6)
    length | 1 2 3 4 5 6 7 8
    price | 1 5 8 9 10 17 17 20

*/

import java.io.*;
import java.util.*;

public class Main {

    public static int solution(int[] price) {
        // write your code here
        int[] np = new int[price.length + 1];
        for (int i = 0; i < price.length; i++) {
            np[i + 1] = price[i];// array of new prices
        }

        int[] dp = new int[np.length];
        dp[0] = 0;
        dp[1] = np[1];

        for (int i = 2; i < dp.length; i++) {
            dp[i] = np[i];// initially we will cut it as it is

            int leftIndex = 1;
            int rightIndex = i - 1;
            while (leftIndex <= rightIndex) {
                if (dp[leftIndex] + dp[rightIndex] > dp[i]) {
                    dp[i] = dp[leftIndex] + dp[rightIndex];
                }
                leftIndex++;
                rightIndex--;
            }
        }

        return dp[dp.length - 1];
    }

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        int[] price = new int[n];
        for (int i = 0; i < n; i++) {
            price[i] = scn.nextInt();
        }
        System.out.println(solution(price));
    }
}
