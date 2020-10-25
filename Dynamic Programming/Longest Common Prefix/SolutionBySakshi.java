import java.util.Scanner;
import java.util.*;

public class SolutionBySakshi {
    public static void main(String[] args) throws Exception 
    {
      	Scanner sc = new Scanner(System.in);
      	 int n=sc.nextInt();
      
        String[] array = new String[n];

        System.out.println("Please enter string ");

        for (int i = 0; i <n; i++) {
            array[i] = sc.next();
        }
		
        String ans=longestCommonPrefix(array);
        System.out.println("the longest common prefix is "+ ans);
        
    }
    
     public  static String longestCommonPrefix(String[] str )
    {
        String ans="";
        if(str.length==0)
        {
            return ans;
        }  
        
        Arrays.sort(str);
        int minlength=Math.min(str[0].length(),str[str.length-1].length());
        for(int i=0;i<minlength;i++)
        {
            if(str[0].charAt(i)==str[str.length-1].charAt(i))
            {
                ans+=str[0].charAt(i);
            }
            else
            {
                return ans;
            }
        }
        return ans;
        
    }
}
