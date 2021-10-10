/**
 * Solution to the Knapsack Problem using Dynamic Programming
 * <p>
 * The Naive way to approach this problem would be by generating all possible
 * subsets and find the optimal one amongst them. The time complexity of this
 * apporach is O(2^n) as in the worst case we would be generating all possible
 * subsets.
 * <p>
 * To Be or Not to Be:
 * not choose      choose
 * |              |
 * Recurrence Relation: K(n, W) = K(n-1, W) + K(n-1, W - w); where w is the
 * weight of the last item whose decision we made.
 * <p>
 * An other way to approach it that comes to mind is using greedy algorithm,
 * where we pick the item which is most promising. This is found by the ratio of
 * value to weight of the item, so once we have this value for the given item,
 * we can sort it, and then start picking one by one until we respect the
 * capacity constraints.
 * But this approach is not correct, does not always give an optimal answer.
 * Consider, item 1: 60/10 = 6, Item 2: 100/20 = 5, Item 3: 120/30 = 4
 * If we start of by picking up th emost promising ones, We would have Item 1
 * and Item 2, 60 + 100 = 160 worth value and remaining capacity is 20.
 * <p>
 * We use dynamic programming to store the solutions to overlapping subproblems.
 * Create a matrix (n+1) * (W + 1) in size.
 * <p>
 * Space Complexity: O(n+1 * W+1)
 * Time Complexity: O(n+1 * W+1) Pseudo-polynomial runtime
 */

import java.util.Scanner;

class Knapsack {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("\nEnter Capacity of Knapsack: ");
        int c = scanner.nextInt();
        System.out.print("\nEnter Number of Items: ");
        int n = scanner.nextInt();
        System.out.print("\nEnter Values of Items deliminated by space: ");
        int[] v = new int[n];
        int i = 0;
        while (i < n) {
            v[i] = scanner.nextInt();
            i++;
        }
        System.out.print("\nEnter Weights of Items deliminated by space: ");
        int[] w = new int[n];
        i = 0;
        while (i < n) {
            w[i] = scanner.nextInt();
            i++;
        }

        System.out.println("\nMaximum Value: " + knapsack(v, w, c));
    }

    private static int knapsack(int[] value, int[] weights, int capacity) {
        int[][] dp = new int[value.length + 1][capacity + 1];
        // case: when capacity j is 0
        for (int i = 0; i < dp.length; i++) {
            dp[i][0] = 0;
        }
        // case: when item i is null, has no weight provides no worth
        for (int j = 0; j < dp[0].length; j++) {
            dp[0][j] = 0;
        }
        // standard "dp" way
        for (int i = 1; i < dp.length; i++) {
            for (int j = 1; j < dp[0].length; j++) {
                dp[i][j] = dp[i - 1][j]; // start of by not including item in knapsack
                if (j >= weights[i - 1]) { // feasibility check
                    // include if, it yields optimal worth
                    dp[i][j] = Math.max(dp[i][j], value[i - 1] + dp[i - 1][j - weights[i - 1]]);
                }
            }
        }
        return dp[value.length][capacity];
    }
}