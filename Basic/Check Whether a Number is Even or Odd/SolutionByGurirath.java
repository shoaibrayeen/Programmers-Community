
/**
 Write a number to check if it is even or odd.
 */
import java.util.*;
public class hacktoberfest2
{
  public static void main(String args[])
  {
      Scanner kb= new Scanner(System.in);
      int n;
      System.out.println("Enter a number to check if it is even or odd");
      n=kb.nextInt();
      if(n%2==0)
      {
          System.out.println("The number is even");
      }
      else
      {
          System.out.println("The number is odd");
      }
  }
}
