
/**
 Write a program to print the lcm of two numbers.
 */
import java.util.*;
public class hacktoberfest4
{
    public static void main(String args[])
    {
        Scanner kb= new Scanner(System.in);
        int i,n1,n2;
        System.out.println("Enter two numbers to check their lcm");
        n1=kb.nextInt();
        n2=kb.nextInt();
        for(i=2;i<Math.max(n1,n2);i++)
        {
            if(n1%i==0 && n2%i==0)
            {
                System.out.println("The LCM is : "+i);
                break;
            }
        }
    }
}
