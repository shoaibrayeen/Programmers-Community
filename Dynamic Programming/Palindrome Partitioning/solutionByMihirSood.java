import java.util.Scanner;

public class solutionByMihirSood {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        String s = scn.next();
        int res = PalindromePartitioningBU(s);
        System.out.println(res);
    }


    public static boolean isPalindrome(String str, int si, int ei) {

        int left = si;
        int right = ei;

        while (left < right) {

            if (str.charAt(left) != str.charAt(right)) {
                return false;
            }

            left++;
            right--;
        }

        return true;
    }

    public static int PalindromePartitioningBU(String str) {

        int n = str.length();

        int[][] strg = new int[n][n];

        for (int slide = 0; slide <= n - 1; slide++) {

            for (int si = 0; si <= n - slide - 1; si++) {

                int ei = si + slide;

                if (isPalindrome(str, si, ei)) {
                    strg[si][ei] = 0;
                } else {
                    int min = Integer.MAX_VALUE;

                    for (int k = si; k <= ei - 1; k++) {

                        int fh = strg[si][k];
                        int sh = strg[k + 1][ei];

                        int ans = fh + sh + 1;

                        if (ans < min) {
                            min = ans;
                        }

                    }

                    strg[si][ei] = min;
                }

            }

        }

        return strg[0][n - 1];

    }
}
