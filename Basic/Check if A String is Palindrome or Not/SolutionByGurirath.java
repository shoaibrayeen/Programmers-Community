import java.util.*;
public class MyClass {
    public static void main(String args[]) {
    Scanner kb=new Scanner(System.in);
     String str,rev;
     int i,len;
     char ch;
     rev="";
     System.out.println("Enter a string to check if it is a palindrome string or not");
     str=kb.nextLine();
     len=str.length();
     for(i=0;i<len;i++)
     {
         ch=str.charAt(i);
         rev=ch+rev;
     }
     if(str.equalsIgnoreCase(rev))
     {
         System.out.println("it is a palindrome string");
     }
     else 
     {
         System.out.println("it is not a palindrome string");
     }
    }
}
