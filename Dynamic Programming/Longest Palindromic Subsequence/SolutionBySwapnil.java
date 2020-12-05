import java.util.*;
public class Solution {

    public static int longestPalindromicSubsequnces(String str) {
    	/*
    	 dp[i][j] =  1 if i ==j
    	 dp[i][j] = Math.max(dp[i+1][j], dp[i][j-1])
    	*/
		int n = s.length();
		if(n < 2) // base condition 
			return n;
		int[][] dp = new int[n][n];
		for(int row = n - 1; row >= 0; row--){
			dp[row][row] = 1;
			for(int col = row+1; col < n; col++){
				if(s.charAt(row) == s.charAt(col))
					dp[row][col] = dp[row+1][col-1] + 2;
				else
					dp[row][col] = Math.max(dp[row+1][col],dp[row][col-1]);
			}
		}
		return dp[0][n-1];
    }

    public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter the string : ");
		String str = sc.nextLine();
		System.out.println(longestPalindromicSubsequnce(str));
    }

 }
