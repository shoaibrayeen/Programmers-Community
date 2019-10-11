import java.util.*;
import java.lang.*;
import java.io.*;


class abc
{	
    static void prime(int n)
    {
        int k=0;
        for(int i=1;i<=n;i++)
        {
            if(n%i==0)
            {
                k++;
            }
        }
        if(k==2)
        {
            System.out.println("Yes");
        }
        else
        {
            System.out.println("No");
        }
	}
	public static void main (String[] args) throws java.lang.Exception
	{	
      int a;
      Scanner sc = new Scanner(System.in);
      System.out.println("Enter the number :");
      a = sc.nextInt();
      prime(a);
	}
}
