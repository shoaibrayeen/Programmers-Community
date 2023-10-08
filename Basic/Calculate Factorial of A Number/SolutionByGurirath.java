
/**
 Write a program to print the factorial of a number.
 */
import java.util.*;
public class SolutionByGurirath
{
    public static void main(String args[])
    {
        Scanner kb= new Scanner(System.in);
        int f=1,i;
        System.out.println("Enter a number to print its factorial");
        int n=kb.nextInt();
        for(i=1;i<=n;i++)
        {
            f=f*i;
        }
        System.out.println("Factorial:"+f);
        
        
    }
}
