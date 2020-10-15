import java.util.*;
public  class Wildcard
{
    public static void main(String args[])

    {
        Scanner sc=new Scanner(System.in);
	    System.out.println("Enter input String ");
	    String s=sc.nextLine();
	    System.out.println("Enter Pattern");
	    String p=sc.nextLine();
        if(isMatch(s, p)) 
        {
		   System.out.println("Pattern Found"); 
	    }
        else
         {
		    System.out.println("Pattern Not Found");
	    }
     

    }
    public  static boolean isMatch(String s, String p) {
        if(p=="")
        {
            return true;
        }
        if(s=="")
        {
            return false;
        }
        if(s=="" && p=="")
        {
            return false;
        }
           
        
    boolean dp[][]=new boolean[p.length()+1][s.length()+1];
        //last
        for(int i=dp.length-1;i>=0;i--)
        {
            for(int j=dp[0].length-1;j>=0;j--)
            {
                //last cell
                if(i==dp.length-1 &&j==dp[0].length-1)
                {
                    dp[i][j]=true;
                }
                //last row
                else if(i==dp.length-1)
                {
                    dp[i][j]=false;
                }
                //last col
                else if(j==dp[0].length-1)
                {
                    //for star case
                    if(p.charAt(i)=='*')
                    {
                        dp[i][j]=dp[i+1][j];
                        
                    }
                    else
                    {
                    dp[i][j]=false;
                    }
                }
                else
                {
                    if(p.charAt(i)=='?')
                    {
                        dp[i][j]=dp[i+1][j+1];
                    }
                    else if(p.charAt(i)=='*')
                    {
                        dp[i][j]=dp[i][j+1] ||dp[i+1][j];
                    }
                    else if(p.charAt(i)==s.charAt(j))
                    {
                        dp[i][j]=dp[i+1][j+1];
                    }
                    else
                    {
                        dp[i][j]=false;
                    }
                        
                }
            }
        }
        return dp[0][0];
        
    }
}
