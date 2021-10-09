
/*
 Description : Java program to find the longest repeated subsequence
*/


import java.util.*;
class Akshay
{
static String longestRepeatedSubSeq(String str)
{
    
    int n = str.length();
    int[][] dp = new int[n + 1][n + 1];
    for (int i = 0; i <= n; i++)
        for (int j = 0; j <= n; j++)
            dp[i][j] = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (str.charAt(i - 1) == str.charAt(j - 1) && i != j)
                dp[i][j] = 1 + dp[i - 1][j - 1];
            else
                dp[i][j] = Math.max(dp[i][j - 1], dp[i - 1][j]);
 
 
    
    String res = "";
 
    // Traverse dp[][] from bottom right
    int i = n, j = n;
    while (i > 0 && j > 0)
    {
        
        if (dp[i][j] == dp[i - 1][j - 1] + 1)
        {
        res = res + str.charAt(i - 1);
        i--;
        j--;
        }
 
        else if (dp[i][j] == dp[i - 1][j])
            i--;
        else
            j--;
    }
    String reverse = "";
               
    for(int k = res.length() - 1; k >= 0; k--)
        {
            reverse = reverse + res.charAt(k);
        }
 
    return reverse;
}
 
// Driver code
public static void main(String args[])
{
    String str = "AABEBCDD";
    System.out.println(longestRepeatedSubSeq(str));
}
}
