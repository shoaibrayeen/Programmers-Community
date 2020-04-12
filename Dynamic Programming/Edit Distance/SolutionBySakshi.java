
import java.util.Scanner;
public class main
{

    public static void main(String args[]) 
    {

        Scanner sc = new Scanner(System.in);

        String str1;
        System.out.print("Enter the string1\t:\t");
        str1 = sc.next();
        String str2;

        System.out.print("Enter the string2\t:\t");
        str2 = sc.next();

        int result = EditDistanceUSingDp(str1, str2);
        System.out.println("\nMinimum number of operation required are: " + result);

    }

    // dp approach using length
    public static int EditDistanceUSingDp(String str1, String str2) 
    {

        int m = str1.length();
        int n = str2.length();

        int dp[][] = new int[m + 1][n + 1];

        for (int i = 0; i < dp.length; i++) 
        {
            for (int j = 0; j < dp[0].length; j++) 
            {
                if (i == 0) 
                {
                    dp[i][j] = j;
                    continue;
                }

                else if (j == 0)
                {

                    dp[i][j] = i;
                    continue;
                }

                // character is present at i-1 index ,j-1 index
                if (str1.charAt(i - 1) == str2.charAt(j - 1))
                {
                    dp[i][j] = dp[i - 1][j - 1];
                }

                else
                {
                    int replace = dp[i - 1][j - 1];

                    int insert = dp[i][j - 1];

                    int delete = dp[i - 1][j];

                    // finding the minimum among all three operation
                    dp[i][j] = Math.min(replace, Math.min(insert, delete)) + 1;

                }

            }
        }

        return dp[m][n];

    }

}

