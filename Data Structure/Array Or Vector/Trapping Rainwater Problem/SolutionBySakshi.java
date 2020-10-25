import java.util.*;
public class TrappingRainWater
{
    public static void main(String args[])
    {
       Scanner sc=new Scanner(System.in);
       int n=sc.nextInt();
       int[]arr=new int[n];
       for(int i=0;i<n;i++)
       {
           arr[i]=sc.nextInt();
       }
       System.out.println("the answer is "+ trap(arr));

    }
    public  static int trap(int[]arr)
    {
        if(arr.length==0)
        {
            return 0;
        }
      int left[]=new int[arr.length];
        int right[]=new int [arr.length];
        
        left[0]=arr[0];
        
        for(int i=1;i<arr.length;i++)
        {
            left[i]=Math.max(arr[i],left[i-1]);
            
        }
        
        right[arr.length-1]=arr[arr.length-1];
        for(int i=arr.length-2;i>=0;i--)
        {
            right[i]=Math.max(arr[i],right[i+1]);
        }
        
        int ans=0;
        for(int i=0;i<arr.length;i++)
        {
            ans+=Math.min(left[i],right[i])-arr[i];
        }
        return ans;
        
    }
}
