import java.util.*;
public class longestSubsequences
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        String str;
        System.out.println("Enter the string for palindromic subseq");
        str=sc.nextLine();

        int result=longestPalindromicSubsequnces(str);
        System.out.println(result);
    }

    public static int longestPalindromicSubsequnces(String str)
    {
        int [][]dp=new int [str.length()][str.length()];

        for(int gap=0;gap<str.length();gap++)
        {
            for(int i=0,j=gap;j<str.length();j++,i++)
            {
                if(gap==0)   //gap one denotes single length string
                {
                    dp[i][j]=1;
                }

                else if(str.charAt(i)==str.charAt(j))
                {
                    dp[i][j]=dp[i+1][j-1]+2;
                }

                else
                {
                    dp[i][j]=Math.max(dp[i+1][j],dp[i][j-1]);
                }
            }
        }

        return dp[0][str.length()-1];

    }

}
