public class Solution {
    public static void main(String args[]) {
        int dimension[] = {40, 20, 30, 10, 30};
        int n = dimension.length - 1;
        int dp[][] = new int[dimension.length][dimension.length];

        System.out.println(mcm_memo(dimension, 0, n, dp));
    }

    // si-starting index
    // ei-ending index of the dimesion

    public static int mcm_memo(int dimension[], int si, int ei, int dp[][]) {
        // base case
        if (ei - si == 1) {
            return 0;
        }
        if (dp[si][ei] != 0) {
            return dp[si][ei];
        }

        // as cut=si+1 be because matrix require two index
        int minimumcost = Integer.MAX_VALUE;
        for (int cut = si + 1; cut < ei; cut++) {
            int cost1 = mcm_memo(dimension, si, cut, dp); // size of the matrix is dimension[si]*dimension[cut]
            int cost2 = mcm_memo(dimension, cut, ei, dp); // size of the matrix is dimension[cut]*dimension[ei]

            int totalcost = cost1 + cost2;
            int productcost = dimension[si] * dimension[ei] * dimension[cut];
            int finalcost = totalcost + productcost;

            if (minimumcost > finalcost) {
                minimumcost = finalcost;
            }

        }
        dp[si][ei] = minimumcost;
        return minimumcost;

    }
}
