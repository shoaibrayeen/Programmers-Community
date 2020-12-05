import java.util.*;
public class Tilling
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        System.out.print("the number of ways are "+solve(n));
    }
    public static long  solve(int N)
    {
        long [] a=new long[N+1];
        a[0]=1;
        a[1]=1;
        for(int i=2;i<=N;i++)
        {
            a[i]=(a[i-1]+a[i-2])%1000000007;
        }
        return a[N];
    }
}
