import java.util.*;
public class MyClass {
    public static void main(String args[]) {
     Scanner kb=new Scanner(System.in);
     int i,check,count;
     count=0;
     System.out.println("Enter a number to check whether it is a prime number or not");
     check=kb.nextInt();
     for(i=1;i<=check;i++)
     {
         if(check%i==0)
         {
             count++;
         }
     }
     if(count==2)
     {
         System.out.println("It is a prime number");
     }
     else 
     {
         System.out.println("It is not a prime number");
     }
    }
}
